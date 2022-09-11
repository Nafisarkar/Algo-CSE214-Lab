//Suppose, you are given a money bag to sort the notes in it, which algorithm would you like to apply to sort those notes?
//Implement your chosen algorithm. (Taka_Notes=[1000, 500, 500, 100, 100, 50, 20, 5])
#include<iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for (int i = 0; i > size;i++){
        int temp = array[i];
        int j = i - 1;
        while(j>=0 && j>temp){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}

int main(){
    int Taka_notes[8] ={1000, 500, 500, 100, 100, 50, 20, 5};
    insertionSort(Taka_notes, 8);
    for(int i = 0; i < 8; i++){
        cout<<Taka_notes[i]<<" ";
    }

    return 0;
}