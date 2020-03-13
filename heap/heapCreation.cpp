#include <bits/stdc++.h>
using namespace std;
class minHeap
{
    vector<int> data;
    int size = 0;

public:
    minHeap(int n)
    {
        data.resize(n);
    }
    void insert(int x)
    {
        if (this->size == 0)
        {
            this->data[size] = x;
            this->size++;
        }
        else
        {
            this->data[this->size] = x;
            this->size++;
            int i = this->size - 1;
            while (i > 0 && data[i / 2] > data[i])
            {
                swap(data[i], data[i / 2]);
                i = i / 2;
            }
        }
    }
    void print()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << this->data[i] << endl;
        }
    }
    // void deleteEle()
    // {
    //     swap(data[0], data[size - 1]);
    //     size--;
    //     int i = 0;
    //     while ((data[i] < data[(2 * i) + 1] || data[i] < data[(2 * i) + 1]))
    //     {
    //         int min_val = min(data[(2 * i) + 1], data[(2 * i) + 2]);
    //         swap(data[i], min_val);
    //     }
    // }
};
int main()
{
    minHeap obj(10);
    obj.insert(20);
    obj.insert(32);
    obj.insert(10);
    obj.insert(45);
    obj.insert(5);
    obj.print();
    return 0;
}