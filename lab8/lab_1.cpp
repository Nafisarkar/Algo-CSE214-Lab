#include<iostream>
using namespace std;


void marge_sort(int arr1[], int arr2[],int size){
	int temp_array[size]={};
	for (int i = 0; i < size/2; ++i)
	{
		temp_array[i]=arr1[i];
	}
	int count=0;
	for (int i = 10; i < size; ++i)
	{
		temp_array[i]= arr2[count];
		count++;
	
	}
	for (int i = 0; i < size; ++i)
	{
		cout<<temp_array[i]<<" "<<endl;
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if(temp_array[i]<temp_array[j]){
				int temp = temp_array[i];
				temp_array[i] = temp_array[j];
				temp_array[j] = temp;
			}
		}
	}

	cout<<"Sorted :"<<endl;
	for (int i = 0; i < size; ++i)
	{
		cout<<temp_array[i]<<" ";
	}
	cout<<endl;


}

int main(){
	int array1[10]= {2,3,52,4,3,56,3,6,3,2};
	int array2[10]= {54,25,21,61,21,6,7,9,6,1};

	cout <<sizeof(array1)/sizeof(int)<<endl;
	cout <<sizeof(array2)/sizeof(int)<<endl;
	int res = sizeof(array1)/sizeof(int);
	 res += sizeof(array2)/sizeof(int);


	marge_sort(array1,array2,res);


	return 0;
}