#include <iostream>
using namespace std;

void lds(int arr[],int si){
	
	int box[si][1];
	int res_arr[si][100];
	int lds_index = 0;
	int lds  = 0; 
	for (int i = 0; i < si; ++i)
	{
		int temp_comp = arr[i];
		int counter = 0;
		int res_count=1;
		res_arr[i][0] = temp_comp;
		for (int j = i+1; j < si; ++j)
		{
			if(temp_comp>=arr[j]){
				counter++;
				temp_comp = arr[j];
				res_arr[i][res_count] = arr[j];
				res_count++;
			}
		}
		res_count = 0;
		box[i][0] = counter+1;
		counter = 0;
	}
	box[si-1][0]=1;

	//print
	for (int i = 0; i < si; ++i)
	{
		cout<<arr[i]<<" res "<<box[i][0]<<endl;
		if(lds<=box[i][0]){
			lds=box[i][0];
			lds_index = i;
		}
	}
	//print lis sequence
	for (int i = 0; i < si; ++i)
	{
		for (int j = 0; j < box[i][0]; ++j)
		{
			cout<<res_arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"lds is index = "<<lds_index<<endl;
	cout<<"LdS elements count = "<<lds<<endl;
}

void lis(int array[],int size){
	int box[size][1];
	int res_array[size][100];
	int lis = 0;

	//lis
	for(int i=0;i<size;i++){
		int temp_comp = array[i];
		int counter =0;
		int res_count=1;
		res_array[i][0] = temp_comp;
		for (int j = i+1; j < size; ++j)
		{
			if(temp_comp<=array[j]){
				cout<<"temp_comp "<<temp_comp<<" array "<<array[j]<<endl;
				counter++;
				temp_comp=array[j];
				res_array[i][res_count]=array[j];
				res_count++;
			}
			
		}
		res_count=0;
		box[i][0]=counter+1;
		
		counter = 0;
		cout<<endl;
	}
	box[size-1][0]=1;


	//print
	for (int i = 0; i < size; ++i)
	{
		cout<<array[i]<<" res "<<box[i][0]<<endl;
		if(box[i][0]>lis){
			lis=i;
		}
	}
	//print lis sequence
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < box[i][0]; ++j)
		{
			cout<<res_array[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"lis is index = "<<lis<<endl;
	cout<<"LIS elements count = "<<box[lis][0]<<endl;
}

int main(){
	

	cout<<"Enter the number of elements you want to insert : "<<endl;
	int x ;
	cin>>x;
	int array[x]={};
	for (int i = 0; i < x; ++i)
	{
		cout<<"element "<<i+1<<" insert : ";
		cin>>array[i];
	}

	cout<<"Enter 1 for lds & Enter 2 for lis 0 to exit"<<endl;
	
	int choice;
	while(cin>>choice && choice != 2){
		if (choice==1)
		{
			lds(array,x);
		}
		else if(choice==2){
			lis(array,x);
		}
	}
	
	
	return 0;

}