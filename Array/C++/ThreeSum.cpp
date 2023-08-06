#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
    vector<int> nums= {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());

    set<vector<int>> s;

    for(int i=0; i<nums.size();i++){
        int j = i+1;
        int k = nums.size() -1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum == 0){
                s.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if(sum > 0){
                k--;
            }
            else j++;
        }
    }
    for(auto arr: s){
        ans.push_back(arr);
    }
}
