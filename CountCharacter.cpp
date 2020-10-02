#include<iostream>
using namespace std;

int main(){
     char c;
    c=cin.get();
    int num=0;
    int charac=0;
    int white_spaces=0;
    while(c!='$')
    {
        
        if(c>=97 && c<=122)
        {
            charac++;
        }
        else if(c==32 || c==10 || c==9)
        {
            white_spaces++;
        }
        else if(c>=48 && c<=57)
        {
            num++;
        }
        c=cin.get();
        
    }
    cout<<charac<<" "<<num<<" "<<white_spaces;
    
  
}
