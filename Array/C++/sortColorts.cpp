#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

void print(vector<int> a){
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
}

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i= low-1;

    for(int j=low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quicksort(vector<int>& arr, int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main()
{
    vector<int> arr= {2,0,1};
    int n = arr.size();
    
    quicksort(arr, 0, n-1);
    print(arr);
}
