#include <bits/stdc++.h>
using namespace std;
vector<int> memo(999999, -1);
int fib(int n)
{
    if (memo[n] != -1)
        return memo[n];
    if (n == 0 || n == 1)
    {
        return memo[n];
    }
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    memo[0] = 0;
    memo[1] = 1;
    cout << fib(n) << endl;
    return 0;
}