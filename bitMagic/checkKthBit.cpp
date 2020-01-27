#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n;
    cout<<"Enter the value of k:"; cin>>k;
    int mask = 1;
    mask <<= (k-1);

    if(n&mask){
        cout<<"True"<<endl;
    }
    else
    cout<<"False"<<endl;

    return 0;
}