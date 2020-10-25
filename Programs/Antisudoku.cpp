#include<bits/stdc++.h>
using namespace std;
/*
 a competitive coding problem/algorithm that
 returns an anti-sudoku by changing at most 9 elements
 of the sudoku
*/  
int main()
{
	int a[9][9];
	int i,j,k,t;
	cin>>t;
	for(k=0;k<t;k++)
	{
		char s[10];
		for(i=0;i<9;i++)
		{
			cin>>s;
			for(j=0;j<9;j++)
			{
				a[i][j]=s[j]-48;
			}
		}
		a[0][0]++;
		a[1][4]++;
		a[2][8]++;
		a[3][1]++;
		a[4][5]++;
		a[5][6]++;
		a[6][2]++;
		a[7][3]++;
		a[8][7]++;
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(a[i][j]<10)
					cout<<a[i][j];
				else
					cout<<'1';
			}
			cout<<endl;
		}
	}
	return 0;	
}
