#include<bits/stdc++.h>
using namespace std;
void swap(int *i, int *j)
{
    *i = *i ^ *j;
    *j = *i ^ *j;
    *i = *i ^ *j;
}
void reverse(int *arr, int l, int h)
{
    while (l < h)
    {
        swap(&arr[l], &arr[h]);
        l++;
        h--;
    }
}
int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8};
    int d = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,d-1);
    reverse(arr,d,size-1);
    reverse(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}