#include<iostream>
using namespace std;

int main(){
    //Binary search
    int array[10] = {2,42,51,52,56,74,77,85,94,154};
    int low = 0,high = sizeof(array)/sizeof(int)-1,key=59;

    while(low<=high){
        int mid = (low+high)/2;
        if(array[mid]==key){
            cout<<"Found at "<<mid<<endl;
            break;
        }
        else if(array[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return 0;
}