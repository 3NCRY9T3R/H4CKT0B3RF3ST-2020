#include <iostream>
#include "solution.h"
using namespace std;

bool isPalRec(char input[],int start,int end){
    if (start==end){
        return true;
    }
    if (input[start]!=input[end]){
        return false;
    }
    if (start<end+1){
        return isPalRec(input,start+1,end-1);}
    else{
        return true;}        
}

bool checkPalindrome(char input[]) {
char *ch = input;
   int count = 0;
   while(*ch != '\0'){
      count++;
      ch++;
   }
    if (count==0||count==1){
        return true;
    }
    else{
        return isPalRec(input,0,count-1);
    }
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
