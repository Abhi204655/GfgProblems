#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        int *TBasket = new int[n];
        int *PBasket = new int[n];

        for (int i = 0; i < n; i++)
            cin >> TBasket[i];
        for (int i = 0; i < n; i++)
            cin >> PBasket[i];

        map<int, int> data;
        for (int i = 0; i < n; i++)
        {
            data[TBasket[i]] += PBasket[i];
        }
        int res = INT_MAX;
        for (auto it = data.begin(); it != data.end(); it++)
        {
            if (res > it->second)
            {
                res = it->second;
            }
        }
        cout << res << endl;
    }
}