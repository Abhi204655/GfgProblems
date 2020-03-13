#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll odd = 0, even = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (__builtin_popcount(x) % 2 == 0)
                even++;
            else
                odd++;
        }
        for (ll i = 0; i < q; i++)
        {
            ll p;
            cin >> p;
            if (__builtin_popcount(p) % 2 == 0)
            {
                cout << even << " " << odd << "\n";
            }
            else
                cout << odd << " " << even << "\n";
        }
    }
    return 0;
}