#include<bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2){

    int count[256] = {0};
    bool flag = true;
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        count[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    string s1 = "gfg";
    string s2 = "ggfg";

    if(anagram(s1,s2)){
        cout<<"The given strings are anagram.."<<endl;
    }
    else cout<<"The given strings are not anagram.."<<endl;

    return 0;
}