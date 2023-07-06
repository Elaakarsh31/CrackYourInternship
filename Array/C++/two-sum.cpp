#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

void print(vector<int> a){
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> nums= {3,2,4}; int target = 6;
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
    }
    print(result);  
}
