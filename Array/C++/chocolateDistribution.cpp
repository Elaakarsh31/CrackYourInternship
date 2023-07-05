#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

int main()
{
    int m = 5;
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int min = INT_MAX;
    for(int i=0; i+m-1<n; i++){
        int diff = arr[i+m-1] - arr[i];
        if(diff< min) min = diff;
    }
    log(min)
}
