#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
    vector<int> nums = {1,1,2};
    vector<int> ans;
    unordered_map<int,int> mp;

    for(auto i: nums){
        mp[i]++;
    }
    for(auto m: mp){
        if(m.second == 2) ans.push_back(m.first);
    }
    print(ans);
}
