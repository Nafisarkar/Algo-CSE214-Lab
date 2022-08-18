// linear search

#include <stdio.h>

// linerSearch function
int kishor(int *arr, int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //0 to n
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        // printf("%d ",array[i]);
        if(array[i]==1){
            printf("found!\n");
        }else{
            printf("not found!\n");
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int key;
        scanf("%d", &key);
        int res = kishor(array, sizeof(array) / sizeof(int), key);

        if (res == -1)
        {
            printf("not found!\n");
        }
        else
        {
            printf("found!\n");
        }
    }

    return 0;
}

// {23,362,62,235,672,26,6,236,6 ....}  -> 62
// {23,362,62,235,672,26,6,236,6 ....} -> 232
// {23,362,62,235,672,26,6,236,6 ....} -> -1
// {23,362,62,235,672,26,6,236,6 ....} -> -1
