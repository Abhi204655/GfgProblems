#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,42,20,23,15,8,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    for(int i=size-1;i>=0;i--){
        if(max < arr[i]){
            max = arr[i];
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}