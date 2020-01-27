#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3,3,3,4,5,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = arr[0];
    for(int i=1;i<n;i++) res ^= arr[i];
    cout<<res<<endl;
    return 0;
}