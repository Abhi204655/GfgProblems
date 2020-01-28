// not done yet...
#include<bits/stdc++.h>
using namespace std;
int findEle(int arr[][3],int n){
    int i=0;int j=0;
    while(i>=0 && j>=0 && i<3 && j<3){
        if(arr[i][j] == n){
            cout<<"found"<<endl;
            break;
        }
        if(arr[i][j] < n){
            if(j==2){
                ++i;
            }
            else{
                ++j;
            }
        }
        if(arr[i][j] > n){
            --j;
        }
    }
    return 0;
}
int main(){
    int arr[][3] = {{10,20,30},{15,25,80},{35,90,100}};
    cout<<findEle(arr,35);
    return 0;
}