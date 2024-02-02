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

bool isPossible(vector<int> arr, int m, int mid){
    int count = 1;
    int lastPos = arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i] - lastPos >=mid){
            count++;
            if(count == m) return true;
            lastPos = arr[i];
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {0,3,4,7,10,9};
    sort(arr.begin(), arr.end());
    int m = 4;
    int s=0, maxi=-1;

    for(int i=0; i<arr.size(); i++){
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;
    int ans= -1;
    int mid = (s+e)/2;

    while(s<=e){
        if(isPossible(arr, m, mid)){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;
        mid = (s+e)/2;
    }
    log(ans)
}
