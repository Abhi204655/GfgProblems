#include <bits/stdc++.h>
using namespace std;
int left(int *arr, int l, int h, int x);
int count(int *arr, int l, int h)
{
    int x = left(arr, l, h, 1);
    if (x == -1)
    {
        cout << x << endl;
        return 0;
    }
    else
    {
        cout << x << endl;
        return h - x;
    }
}
int left(int *arr, int l, int h, int x)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
        {
            return mid;
        }
        else if (arr[mid] >= x)
        {
            return left(arr, l, mid - 1, x);
        }
        else
        {
            return left(arr, mid + 1, h, x);
        }
    }
    else
        return -1;
}
int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The number of 1's in this array is " << count(arr, 0, n) << endl;
    return 0;
}