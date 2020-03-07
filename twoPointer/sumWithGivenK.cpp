#include <bits/stdc++.h>
using namespace std;
bool check(int *arr, int size, int k)
{
    int l = 0, h = size - 1;
    while (l < h)
    {
        int temp = arr[l] + arr[h];
        if (temp == k)
            return true;

        else if (temp > k)
            h -= 1;

        else if (temp < k)
            l += 1;
    }
    return false;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 17;
    if (check(arr, size, k))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}