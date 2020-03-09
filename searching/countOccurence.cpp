#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;

int right(int *arr, int l, int h, int key);
int left(int *arr, int l, int h, int key);

int count(int *arr, int l, int h, int key)
{
    return right(arr, l, h, key) - left(arr, l, h, key) + 1;
}
int left(int *arr, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == key && (mid == 0 || arr[mid - 1] != key))
            return mid;
        else if (arr[mid] >= key)
            return left(arr, l, mid - 1, key);
        else
            return left(arr, mid + 1, h, key);
    }
    else
        return -1;
}
int right(int *arr, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == key && (mid == h - 1 || arr[mid + 1] != key))
            return mid;
        else if (arr[mid] <= key)
            return right(arr, mid + 1, h, key);
        else
            return right(arr, l, mid - 1, key);
    }
    else
        return -1;
}

int main()
{
    int arr[] = {12, 23, 34, 43, 54, 64, 74, 77, 84, 84, 84, 84, 93};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << "The number of time this element occurs in the list is " << count(arr, 0, n, key) << endl;
    return 0;
}