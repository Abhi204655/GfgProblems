#include <bits/stdc++.h>
using namespace std;
bool rotationPoint(int *arr, int l, int h, int ele)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] < ele && (mid == 0 || arr[mid - 1] > ele))
            return true;
        else if (arr[mid] <= ele)
            return rotationPoint(arr, l, mid - 1, ele);
        else
            return rotationPoint(arr, mid + 1, h, ele);
    }
    else
        return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (rotationPoint(arr, 0, n, arr[0]))
        cout << "Your array is rotated" << endl;
    else
        cout << "Not rotated" << endl;
    return 0;
}