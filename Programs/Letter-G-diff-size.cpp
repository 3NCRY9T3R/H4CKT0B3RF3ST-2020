#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main ()
{ int n,i,j;
  cout<<"enter any no. greater than than 2:";
  cin>>n;
  for(i=0;i<n;i++)
  { cout<<"\n";
    for (j=0;j<(2*n-1);j++)
    { if ( (i==0) || (j==0) ||
	   ( (i==n-1) && ( (j<=(2*n-1)/2) ) ) ||
	   ( (i>(n-1)/2) && ( (j==(2*n-1)/2) || (j==(2*n-2)) ) ) )
      cout<<"*";
	else if ((n % 2 == 0) && ((i == (n / 2)) && (j > (2 * n - 1) / 2)))
				cout << "*";
	else if ((n % 2 != 0) && ((i == n / 2) && (j >=(2 * n - 1) / 2)))
				cout << "*";
	else
    cout<<" ";
    }
  }
  getch ();
}
