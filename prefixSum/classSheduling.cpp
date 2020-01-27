#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> lec{{0, 5}, {1, 2}, {1, 10}};
    
    for(int i=0;i<lec.size();i++){
        for(int j=0;j<lec[i].size();i++){
            cout<<lec[i][j]<<endl;
        }
    }
    return 0;
}