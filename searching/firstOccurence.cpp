// find the index of the left most occurence of the element..
#include <bits/stdc++.h>
using namespace std;
int findFirstoccurence(int *arr, int l, int h, int x)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == x && (mid != 0 || arr[mid - 1] != x))
            return mid;

        else if (arr[mid] >= x)
            return findFirstoccurence(arr, 0, mid - 1, x);
        else
            return findFirstoccurence(arr, mid + 1, h, x);
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {12, 21, 23, 32, 42, 43, 53, 53};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << "The first occurence is at index " << findFirstoccurence(arr, 0, n, key) << endl;

    return 0;
}