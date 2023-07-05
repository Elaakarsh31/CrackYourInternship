#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

int main()
{
    vector<int> arr = {1,3,4,2,2};
    vector<bool> cnt(arr.size(), 0);

    for(int i=0;i<arr.size();i++){
        if(cnt[arr[i]]) log(arr[i])
        cnt[arr[i]] = 1; 
    }
}
