#include<iostream>
#include<cstring>
using namespace std;

int lcs( char *X, char *Y, int m, int n ) 
{ 
    if (m == 0 || n == 0) 
        return 0; 
    if (X[m-1] == Y[n-1]) 
        return 1 + lcs(X, Y, m-1, n-1); 
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n)); 
} 


int main(){
	char x[100];
	char y[100];
	cin>>x;
	cin>>y;

    int size1 = strlen(x);
    int size2 = strlen(y);
    cout<<lcs(x,y,size1,size2)<<endl;

	return 0;
}