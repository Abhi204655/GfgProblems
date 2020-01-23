#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {1,5,3,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lm = INT_MAX;
    int LM = INT_MIN;
    int profit = 0;
    for(int i=0;i<n;i++){
        int temp1 = lm;
        int temp2 = LM;
        if(i==0){
            lm = arr[i];
            if(arr[i+1] > LM){
                LM  = arr[i+1];
            }
        }
        else if(i==n-1){
            LM = arr[i];
            if(arr[i-1] < lm){
                lm = arr[i-1];
            }
        }
        else{
            if(lm > arr[i-1]){
                lm = arr[i-1];
            }
            if(LM < arr[i+1]){
                LM = arr[i+1];
            }
        }
        if(lm!=temp1 or LM!=temp2){
            profit += (LM-lm);
        }
        cout<<profit<<endl;
    }
    return 0;
}