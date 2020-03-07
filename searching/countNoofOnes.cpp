#include <bits/stdc++.h>
using namespace std;
int left(int *arr, int l, int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == 1 && (mid != 0 || arr[mid - 1] != 1))
        {
            return mid;
        }
        else if (arr[mid] <= 1)
        {
            return left(arr, 0, mid - 1);
        }
    }
    else
        return -1;
}
int count(int *arr, int l, int h)
{
    int leftIndex = left(arr, l, h);
    if (leftIndex == -1)
        return 0;
    else
        return h - leftIndex + 1;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The number of 1's in this array is " << count(arr, 0, n) << endl;
    return 0;
}