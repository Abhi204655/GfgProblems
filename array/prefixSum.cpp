#include<bits/stdc++.h>
using namespace std;

int sum(int* pre,int l,int r){
    if(l==0) return pre[r];
    else return pre[r] - pre[l-1];
}
int main(){
    int arr[] = {1, 5, 3, 8, 12, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *pre = new int[n];

    pre[0] = arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + arr[i];
    }
    int a,b;
    cin>>a>>b;

    cout<<sum(arr,a,b)<<endl;
    return 0;
}