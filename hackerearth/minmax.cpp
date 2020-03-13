#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> seq(n);
    for (auto &x : seq)
        cin >> x;

    vector<int> temp(n + 1, 0);
    for (auto it = seq.begin(); it != seq.end(); it++)
    {
        temp[*it]++;
    }
    vector<int> sortedArray;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < temp[i]; j++)
        {
            sortedArray.push_back(i);
        }
    }
    int min = sortedArray[0];
    int max = sortedArray.back();
    bool res = false;
    return 0;
}