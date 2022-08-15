#include <iostream>
#include "inout.h"
using namespace std;

void insertionSort(int a[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int temp = a[i];
        int j = i - 1;
        for (; j >= 0 && a[j] > temp; --j)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}

void binarySearch(int a[], int N, int x)
{
    int low = 0;
    int high = N - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            cout << "found" << endl;
            return;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "not found" << endl;
}

int main()
{
    io();
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element number " << i + 1 << endl;
        cin >> array[i];
    }

    insertionSort(array, size);

    int src = 0;
    cout << "enter how many elements you want to seach" << endl;
    cin >> src;

    while (src--)
    {
        int src_value;
        cout << "enter the value you want to search" << endl;
        cin >> src_value;
        binarySearch(array, size, src_value);
    }

    return 0;
}