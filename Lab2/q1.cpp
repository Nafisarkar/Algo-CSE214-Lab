#include <iostream>
#include "inout.h"

using namespace std;

void insertionSort(int a[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int temp = a[i];
        int j = i - 1;
        // cout << "[ temp is " << temp << " ] [ j is " << j << " ] [ i is " << i << " ] " << endl;
        // cout<<"a[j] -> "<<a[j]<<" ";
        for (; j >= 0 && a[j] > temp; --j)
        {
            // cout<<"| a[j+1] -> "<<a[j+1]<<endl;
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}

int main()
{
    io();
    int run;
    cin >> run;
    // cout << "number of elements in the array" << endl;
    int array[run];
    for (int i = 0; i < run; i++)
    {
        // cout << "element number " << i + 1 << endl;
        cin >> array[i];
    }
    insertionSort(array, run);

    for (int i = 0; i < run; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}