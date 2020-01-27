#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abc";
    int n = s.length();
    int ele = 1<<n;
    int i,j;
    for(i=0;i<ele;i++){
        for(j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}