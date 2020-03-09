#include <bits/stdc++.h>
using namespace std;
void printFreq(int *arr, int size)
{
    unordered_map<int, int> countMap;
    for (int i = 0; i < size; i++)
    {
        countMap[arr[i]]++;
    }
    for (auto it = countMap.begin(); it != countMap.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }
}
int main()
{
    int arr[] = {21, 42, 21, 44, 23, 42, 23, 53, 43, 66, 64, 23, 64};
    int size = sizeof(arr) / sizeof(arr[0]);
    printFreq(arr, size);
    return 0;
}