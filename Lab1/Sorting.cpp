#include <iostream>
using namespace std;
int main()
{
    int box[10] = {21, 35, 62, 76, 23, 72, 37, 23, 62, 12};

    
    for (int i = 0; i < sizeof(box) / sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(box) / sizeof(int); j++)
        {
            if (box[i] < box[j])
            {
                int temp = box[i];
                box[i] = box[j];
                box[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << box[i]<<" ";
    }
    return 0;
}