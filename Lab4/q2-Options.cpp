#include <iostream>
using namespace std;


void insertionSort(int a[], int N) {
  for (int i = 1; i < N; i++) {
    int temp = a[i];
    int j = i - 1;
    for (; j >= 0 && a[j] > temp; --j) {
      a[j + 1] = a[j];
    }
    a[j + 1] = temp;
  }
}


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

void display(int a[], int x) {
  for (size_t i = 0; i < x; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void binarySrc(int array[],int high) {
  cout<<"Enter the elemnt you want to search :";
  int key;
  cin>>key;
  int low = 0;
  bool found=false;
  while (low <= high-1) {
    int mid = (low + high) / 2;
    if (array[mid] == key) {
      cout << "Found at " << mid << endl;
      found=true;
      break;
    } else if (array[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  if(found==false){
    cout<<"Not found!"<<endl;
  }
}
int main() {
  cout << "Enter how many elements you want : ";
  int x;
  cin >> x;
  int array[x];
  for (size_t i = 0; i < x; i++) {
    cout << "element " << i + 1 << "->";
    cin >> array[i];
  }

  while (1) {
    int choise;
    cout << "Enter which sort you want to use -> "<<endl;;
    cout << "1.Insertion sort"<<endl;
    cout << "2.Marge Sort"<<endl;
    cout << "0.exit";
    cin >> choise;
    switch (choise) {
    case 1:
      insertionSort(array, x);
      display(array, x);
      break;
    case 2:
      margeSort(array,0,x-1);
      display(array, x);
      break;
    case 3:
      binarySrc(array,x);
      display(array, x);
      break;
    case 0:
        exit(1);
      break;
    }
  }

  for (size_t i = 0; i < x; i++) {
    cout << array[i] << " ";
  }
  return 0;
}