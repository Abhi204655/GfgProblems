#include<bits/stdc++.h>
using namespace std;
int binarySearch(int* arr,int l,int r,int key){
    if(l > r) return -1;
    int mid = (l+r)/2;

    if(arr[mid] == key) return mid;

    if(arr[mid] > key) return binarySearch(arr,0,mid-1,key);
    if(arr[mid] < key) return binarySearch(arr,mid+1,r,key);    
}
int main(){
    int arr[] = { 12, 21, 23, 32, 42, 43, 53, 53 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int key; cin>>key;
    int res = binarySearch(arr,0,n-1,key);
    (res != -1) ? cout << "The element is found at " << res << endl : cout << "The element you are looking for is not in the array." << endl;
    return 0;
}