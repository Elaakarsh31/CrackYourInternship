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
    vector<int> a = {0,1,0,2,3};
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i] == 0){
            a.erase(a.begin()+i);
            i--;
            count++;
        }
    }

    for(int i=0;i<count;i++) {a.push_back(0);}
    print(a);
}
