//2D matrix multiplication for beginners (uses two integer arrays, input and output using simple for loops)
//contributed by Toshani
#include <iostream>
using namespace std;
int main ()
{
	int a[100][100] = {0};
	int b[100][100] = {0};
	int mult[100][100] = {0};
	int c1, r1, r2, c2;
	//Taking in matrix orders
	cout<<"Enter the number of rows in matrix A:\t";
	cin>>r1;
	cout<<"Enter the number columns in matrix A:\t";
	cin>>c1;
	cout<<"Enter the number of rows in matrix B:\t";
	cin>>r2;
	cout<<"Enter the number columns in matrix B:\t";
	cin>>c2;
	//Taking in matrix
	cout<<"Entering matrix A:\n";
	for (int i=0; i<r1; i++)
	{
		for (int j=0; j<c1; j++)
		{
			cout<<"Enter the element\t";
			cin>>a[i][j];
		}
	}
	cout<<"Entering matrix B:\n";
	for (int i=0; i<r2; i++)
	{
		for (int j=0; j<c2; j++)
		{
			cout<<"Enter the element\t";
			cin>>b[i][j];
		}
	}
	//Multiplication
	for (int i = 0; i<r1; i++)
	{
		for (int j =0; j<c2; j++)
		{
			for (int k=0; k<c1; k++)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i<r1; i++)
	{
		for (int j =0; j<c2; j++)
		{
			cout<<"\t"<<mult[i][j];
		}
		cout<<"\n";
	}
}
