#include <bits/stdc++.h>
using namespace std;
int Binary(int n)
{
    string res;
    for (unsigned long i = (1 << 31); i > 0; i /= 2)
    {
        if (n & i)
            res += "1";
        else
            res += "0";
    }
    return stoi(res);
}
int main()
{
    int n;
    cin >> n;
    int digit = floor(log10(n) + 1);
    int div = (1 << digit) - 1;
    for (int i = 0; i <= div; i++)
    {
        int res = Binary(i);
        if (res <= n)
            cout << res << endl;
    }
    return 0;
}
