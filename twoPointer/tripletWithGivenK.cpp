#include <bits/stdc++.h>
using namespace std;
bool checksum(int *arr, int l, int h, int k)
{
    while (l < h)
    {
        if (arr[l] + arr[h] == k)
        {
            return true;
        }
        else if (arr[l] + arr[h] > k)
        {
            h--;
        }
        else if (arr[l] + arr[h] < k)
        {
            l++;
        }
    }
    return false;
}
bool check(int *arr, int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (checksum(arr, i + 1, size - 1, k - arr[i]))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 32;

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