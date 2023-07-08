#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

int main()
{
    vector<int> prices = {7,6,4,3,1};

    int profit=0;
    vector<int> temp;
    for(int i=1;i<prices.size();i++){
        temp.push_back(prices[i]-prices[i-1]);
    }
    for(auto i: temp){
        if(i>0) profit += i;
    }
    log(profit)
}
