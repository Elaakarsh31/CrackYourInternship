#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
    vector<int> nums= {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> ans;
    set<vector<int>> s;
    sort(nums.begin(), nums.end());

    for(int a=0; a<nums.size(); a++){
        for(int b = a+1;b<nums.size();b++){
            int c = b+1;
            int d = nums.size()-1;

            while(c<d){
                long long int sum = nums[a];
                sum+= nums[b];
                sum+= nums[c];
                sum+= nums[d];
 
                if(sum == target){
                    s.insert({nums[a], nums[b], nums[c], nums[d]});
                    c++;
                    d--;
                }
                else if(sum>0){
                    d--;
                }
                else c++;
            }
        }
    }

    for(auto arr: s){
        for(auto i: arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
