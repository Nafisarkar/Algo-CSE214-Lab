#include <functional>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    int price = 0;
    int value[5] = {3, 4 , 20, 5, 50};
    int weight[5] = {4, 8, 2, 6, 1};
    int sorted_value[5] = {3, 4 , 20, 5, 50};

    sort(sorted_value, sorted_value+sizeof(sorted_value)/sizeof(int), greater<int>());

    int beg = 10;
    
    for (int i = 0; i < 5; i++){
        cout<<sorted_value[i]<<endl;
    }
    

    int w=0;
    for (size_t i = 0; i < sizeof(value)/sizeof(value[0]); i++)
    {
        
        int highest_order = sorted_value[i];

        int index = 0;
        int stored = 0;
        for(int j = 0; j < sizeof(value)/sizeof(value[0]); j++){
            if(value[j] == highest_order){
                cout<<"[metch] "<<value[j]<<" <-> " <<highest_order<<endl;
                index = j;
                stored = weight[j];
                cout<<"[stored] "<<stored<<" [Index] "<<index<<endl;

                break;
            }
        }

        while (w<beg && stored>0 ) {
            w++;
            price += highest_order;
            stored --;
            cout<<"[while->] "<<w<<" and " <<price<<endl;
            if(stored ==0){
                break;
            }
        }
    }
    cout<<"price = "<<price<<endl;


    return 0;
}