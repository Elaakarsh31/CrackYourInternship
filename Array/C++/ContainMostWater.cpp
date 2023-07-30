#include <bits/stdc++.h>
#define log(x) cout<<x<<endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int left = 0;
    int right = height.size()-1;
    int area = 0;

    while(left< right){
        int len = min(height[left], height[right]);
        int breadth = abs(left-right);
        area = max(len*breadth, area);
        if(height[left]<height[right]) left++;
        else if(height[left]>height[right]) right--;
        else{
            left++;
            right--;
        } 
    }
    log(area)
}
