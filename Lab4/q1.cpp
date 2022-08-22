#include <iostream>
using namespace std;

void marge(int a[],int low,int mid,int high)
{
    int b[10] ={0};
    int k=0;
    int i=low,j=mid+1;
    
    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[j])
        {
            b[k++] = a[i];
            i++;
        }
        else{
            b[k++]= a[j];
            j++;
        }
    }
    while(i<=mid)
    {
        b[k++] = a[i++];
    }
    while(j<=high)
    {
        b[k++] = a[j++];
        
    }
    int p= low;
    for(int l = 0;l<k;l++)
    {
        a[p++] = b[l];
    }
    
    
}

int margeSort(int array[],int p,int r){
    int q=0;
    if(p<r){
        q=(p+r-1)/2;
        margeSort(array, p, q);
        margeSort(array, q+1, r);
        marge(array,p,q,r);
    }
    return 0;
}

int main(){
    int x;
    cout<<"Enter how many elements you want to insert :";
    cin>>x;
    int array[x];
    for (size_t i = 0; i < x; i++)
    {   
        cout<<i+1<<" number element : ";
        cin>>array[i];
    }
    
    margeSort(array,0,x-1);

    for (size_t i = 0; i < x; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}