#include<bits/stdc++.h>
using namespace std;
int longestStream(int n){
    int res = INT_MIN;
    while(n>0){
        if(n&1 == 1){
            int temp = n;
            int temp_max = 0;
            while(temp&1 != 0){
                temp_max++;
                temp >>= 1;
            }
            if(temp_max > res) res = temp_max;
            n >>= temp_max;
        }
        else{
            n >>= 1;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<longestStream(n)<<endl;
    return 0;
}