#include<iostream.h>
#include<conio.h>
void main ()
{ clrscr();
  int i,j,l[9],b[9];
  l[0]=1189 , b[0]=841 ;
  cout<<"\n DIMENSIONS OF PAPER OF SIZE: ";
  for(i=0;i<9;i++)
  { cout<<"\n A["<<i<<"] are ";
    cout<<l[i]<<" mm X "<<b[i]<<" mm";
    if(l[i]>b[i])
    { b[i+1]=l[i]/2;
      l[i+1]=b[i];
    }
    else
    { b[i+1]=b[i]/2;
      l[i+1]=l[i];
    }
  }
  getch();
}
