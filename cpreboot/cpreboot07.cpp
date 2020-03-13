#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(1001, 0);
        while (n--)
        {
            int p, s;
            int res = 0;
            cin >> p >> s;
            if (p >= 9)
                continue;
            else
            {
                arr[p] = max(arr[p], s);
            }
        }
        int res = accumulate(arr.begin(), arr.end(), 0);
        cout << res << endl;
    }
    return 0;
}