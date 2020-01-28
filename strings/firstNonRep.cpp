#include<bits/stdc++.h>
using namespace std;
char FNC(string s){
    int count[256];
    memset(count,-1,sizeof(count));
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]] == 0){
            return s[i];
        }
    }
}
int main(){
    string s = "geeksforgeeks";
    cout<<FNC(s)<<endl;
    return 0;
}