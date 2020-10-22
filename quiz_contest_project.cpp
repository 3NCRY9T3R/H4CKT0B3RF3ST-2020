#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream>
class contest
{
private:
    int roll;
    float x;
    char name[20];
    char s[500],ans;

public:
    contest()
    { x=0; }
    void init();
    void define();
    void display();
};
void  contest :: define()
{
   ifstream in;
   char a;
      int i=0;
   in.open("ques.txt");
    while(in.eof()==0)
    {
    in.getline(s,500);
    cout<<endl<<s;
   if(i==4)
   {
   in.get(a);
   cout<<"\nans:";
    cin>>ans;
   i=-1;
   in.getline(s,500);
    if(ans==a)
       {
       x=x+5;
       cout<<" *Your ans  correct.\n";
       }
    else
       {
        x=x-2.5;
       cout<<" # Wrong ans.\n";
       }
    }
    i++;
    }
   in.close();
}
     void contest :: init()
       {
     cout<<"\t\t\t   Examinee Name:";
     cin>>name;
     cout<<"\n\t\t\t   Examinee roll:";
     cin>>roll;
       }
     void contest :: display()
       {
     cout<<"\n **Result:\n";
     cout<<"\t"<<name<<" you got total "<<x<<" marks,out of 50.\n";
       }

int main()
{
    //clrscr();
    contest r;
    cout<<"      \t\t\t~~~*** QUIZ CONTEST ***~~~\t      Total Marks:50\n\n";
    r.init();
    cout<<"\t*5 marks per Ques(half negative marking for wrong ans)";
       L:
    cout<<"\n\n\tselect your choice:\n"
        <<"\n\t1 for start exam"
        <<"\n\t0 for quit the exam :";
       int c;
       cin>>c;
       switch(c)
       {
       case 1:
        r.define();
        r.display();
        break;
       case 0:
        exit(1);
       default:
        cout<<"invalid choice!";
        goto L;
       }
       getch();
       return 0;
}

