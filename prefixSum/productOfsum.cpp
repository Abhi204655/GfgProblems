#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {4,10,11,10,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int pre[n] = {0};
    pre[0] = arr[0];
    for(int i=1;i<n;i++)
        pre[i] = pre[i-1] + arr[i];

    int res = INT_MIN;
    for(int i=0;i<n;i++) {
        int temp = pre[i] * (pre[n-1] - pre[i]);
        if(temp > res) res = temp;
    }

    cout<<res<<endl;
    return 0;
}