#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,42,21,43,32,53,23,53};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int key; cin>>key;

    int l = 0,r = n-1;
    int mid;
    int index = -1;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid] == key){
            index = mid;
            break;
        }
        else if(arr[mid] > key){
            r = mid -1;
        }
        else if(arr[mid] < key){
            l = mid+1;
        }
    }
    (index != -1) ? cout<<"The element is found at "<<index<<endl : cout<<"The element you are looking for is not in the array."<<endl;

    return 0;
}