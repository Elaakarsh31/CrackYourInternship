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
    vector<int> a = {7,5,3,6,4,1}; 
    int profit =0, max=0;
    for(int i=1; i<a.size(); i++){
        profit += a[i] - a[i-1];
        if(max<profit) max = profit;
        if(profit<0) profit = 0;
    }
    log(max)
}
