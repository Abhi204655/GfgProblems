#include<bits/stdc++.h>
using namespace std;
bool powerofTWo(int n){
    if (n && !(n & (n - 1)))
        return true;
    else
        return false;
}
int main(){
    int n;
    cin>>n;
    if(powerofTWo(n))
        cout << "The given number is power of 2." << endl;
    else
        cout << "The given number is not a power of 2." << endl;
    return 0;
}