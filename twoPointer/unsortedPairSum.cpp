#include <bits/stdc++.h>
using namespace std;
bool check(int *arr, int size, int k)
{
    unordered_multiset<int> hash;

    for (int i = 0; i < size; i++)
    {
        hash.insert(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (hash.find(k - arr[i]) != hash.end())
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {30, 2, 8, 12, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 17;
    if (check(arr, size, k))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}