#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {3,0,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left[size] = {0};
    int right[size] = {0};

    left[0] = arr[0];
    for(int i=1;i<size;i++){
        left[i] = max(left[i-1],arr[i]);
    }

    right[size-1] = arr[size-1];
    for(int i=size-2;i>=0;i--){
        right[i] = max(right[i+1],arr[i]);
    }

    int res = 0;
    for(int i=0;i<size;i++){
        res += min(left[i],right[i]) - arr[i];
    }
    cout<<res<<endl;

    return 0;
}