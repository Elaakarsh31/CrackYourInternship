#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

void print(vector<int> a){
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
}
void print_array(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr= {0,0,1,1,1,2,2,3,3,4};
    // vector<int> arr= {1,1,2};
    // vector<bool> vec(arr.size(),0);
    set<int> index;
    vector<int> temp;
    for(auto i: arr){
        index.insert(i);
    }
    for(auto i: index){
        temp.push_back(i);
    }
    // for(auto i: index){cout<<i<<" ";}
    
    print(temp);

}
