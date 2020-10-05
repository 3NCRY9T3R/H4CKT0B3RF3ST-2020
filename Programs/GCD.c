#include <stdio.h>
#include <stdlib.h>
//Function to calculate Greatest common divisor - 
int gcd(int firstNum,int secondNum)
{
    int tempNum;
    if(firstNum<secondNum)
    {
      int temp=firstNum;
      firstNum=secondNum;
      secondNum=temp;
    }
    while(firstNum%secondNum!=0)
    {
        tempNum=firstNum;
        firstNum=secondNum;
        secondNum=tempNum%secondNum;

    }
    printf("The gcd is %d",secondNum);
    return 0;
}

int main()
{
    int firstNum,secondNum,remainder;
    printf("Enter two numbers to calculate gcd");
    scanf("%d %d",&firstNum,&secondNum);
    gcd(firstNum,secondNum);
    return 0;
}
