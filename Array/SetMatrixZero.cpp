#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
using namespace std;

void display(vector<vector<int>> arr){
    for(auto i: arr){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>> arr = {{1,1,1}, {1,0,1}, {1,1,1}};
    // vector<vector<int>> arr = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
    int row_size = arr.size();
    int col_size = arr[0].size();

    vector<int> x,y;

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            if(arr[i][j] == 0){
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    log("Before")
    display(arr);

    // set row to zero
    for(int i=0; i<x.size(); i++){
        for(int j=0; j< col_size; j++){
            arr[x[i]][j] = 0;
        }
    }

    // set column to zero
    for(int i=0; i<y.size(); i++){
        for(int j=0; j< row_size; j++){
            arr[j][y[i]] = 0;
        }
    }
    log("After")
    display(arr);
}
