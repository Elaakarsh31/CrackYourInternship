#include "bits.h"
#define log(x) cout<<x<<endl;
using namespace std;

void print(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
void print2d(vector<vector<int>> arr){
    for(auto x: arr){
        for(auto i: x){
            cout<< i<<" ";
        }
        cout<<endl;
    }
}

int sqrt(int n){
    int s=0, e = n, mid= (s+e)/2;
    int ans=0;

    while(s<=e){
        int square = mid*mid;

        if(square == n){
            return mid;
        }
        else if(square > n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main()
{
    log(sqrt(8))
}
