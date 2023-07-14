#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

int main()
{
    vector<int> nums = {4,5,0,-2,-3,1}; int k=5;
    unordered_map<int, int> mp;
    int sum=0, count=0;
    mp[0]++;

    for(auto i: nums){
        sum += i;
        if(mp[(sum%k +k)%k]>0){
            count+= mp[((sum%k+k)%k)];
        }
        mp[((sum%k+k)%k)]++;
    }
    for(auto i: mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    log(count)
}
