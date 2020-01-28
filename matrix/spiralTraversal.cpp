// not completed yet..
#include<bits/stdc++.h>
using namespace std;
void spiral(int arr[][4]){
    int i=3;int j=3;
    while(i>=0 && j>=0){
        for(int t1=3-i;t1<j;t1++){
            cout<<arr[3-i][t1]<<" ";
        }
        for(int t2=3-i;t2<j;t2++){
            cout<<arr[t2][3-j]<<" ";
        }
    }

}
int main(){
    int arr[4][4];
    int temp = 1;
    for(int i=0;i<4;i++){   
        for(int j=0;j<4;j++){
            arr[i][j] = temp;
            ++temp;
        }
    }

    spiral(arr);
    return 0;
}