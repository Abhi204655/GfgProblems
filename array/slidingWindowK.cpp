#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,5,3,8,12,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int  k = 3;
    int res = arr[0]+arr[1]+arr[2];

    int temp;
    for(int i=3;i<n;i++){
        temp = res - arr[i-k] + arr[i];
        if(temp > res) res = temp;
    }
    cout<<res<<endl;
    return 0;
}