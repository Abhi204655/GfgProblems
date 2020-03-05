#include <bits/stdc++.h>
using namespace std;
int left(int *arr, int l, int h, int x);
int right(int *arr, int l, int h, int x);
int count(int *arr, int l, int h, int x)
{
    return right(arr, l, h, x) - left(arr, l, h, x) + 1;
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
int right(int *arr, int l, int h, int x)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == x && (mid == h || arr[mid + 1] != x))
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
    int arr[] = {12, 21, 23, 23, 23, 23, 32, 42, 43, 53, 53};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << "The number of time this element occurs in the list is " << count(arr, 0, n, key) << endl;
    return 0;
}