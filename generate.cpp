#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    map<int, vector<int>> set;
    int n = (1 << size);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i & (1 << j)) > 0)
                set[i].push_back(arr[j]);
        }
    }

    for (auto it = set.begin(); it != set.end(); it++)
    {
        cout << it->first << " : ";
        for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++)
        {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}

// 0000000
