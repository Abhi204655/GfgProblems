#include<bits/stdc++.h>
using namespace std;
char FRC(string s1){
    int count[256];
    memset(count,-1,sizeof(count));
    for(int i=0;i<s1.length();i++){
        if(count[s1[i]] != -1){
            return s1[i];
        }
        else{
            count[s1[i]]++;
        }
    }
}
int main(){
    string s1 = "abcdefghidjklm";
    cout<<FRC(s1)<<endl;
    return 0;
}