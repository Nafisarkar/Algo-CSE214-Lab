#include <iostream>
#define box 10 //size of the coin box
using namespace std;
int main(){

    int coin[box] = {10, 5 , 2, 1}; 

    double num = 13;
    int counter = 0;
    for (size_t i = 0; i < box; i++)
    {
        int largest_coin = coin[i];
        // while(num>0){
        //     if(num>=largest_coin){
        //         num = num-largest_coin;
        //         counter++;
        //     }
        //     else{
        //         break;
        //     }
        //     cout<<"remaining: "<<num<<endl;
        // }

        int temp = num/largest_coin;
        counter +=temp; // increment coin cout;
        num = num - (largest_coin*temp);

    }
    cout<<"coutner = "<<counter<<endl;
    return 0;
}