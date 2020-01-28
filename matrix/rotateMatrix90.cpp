#include<bits/stdc++.h>
using namespace std;
void swap(int &i, int &j)
{
    i = i ^ j;
    j = i ^ j;
    i = i ^ j;
}
void transpose(int arr[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotateBy90(int arr[][3]){
    transpose(arr);
    for(int i=0;i<( 3/2);i++){
        for(int j=0;j<3;j++){
            swap(arr[i][j],arr[2-i][j]);
        }
    }
}
int main(){
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateBy90(arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}