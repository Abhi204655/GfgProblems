#include <bits/stdc++.h>
using namespace std;
// recursive solution with complexity 2^n
// int lcs(string s1, string s2, int m, int n)
// {
//     if (m == 0 or n == 0)
//         return 0;
//     if (s1[m - 1] == s2[n - 1])
//         return 1 + lcs(s1, s2, m - 1, n - 1);

//     return max(lcs(s1, s2, m, n - 1), lcs(s1, s2, m - 1, n));
// }

int dpLcs(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}
int main()
{
    string s1 = "abcdef";
    string s2 = "acdgef";
    int m = s1.length();
    int n = s2.length();

    cout << "The longest comman sub sequence in both of these strings are of lenght " << dpLcs(s1, s2, m, n) << endl;
    return 0;
}