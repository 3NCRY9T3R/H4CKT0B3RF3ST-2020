#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int stack=0,data,oper=1,i,n=-1;
void push();
void pop();
void display();
int main()
{
for(i=0;i<=100;i++)
{

	    printf("enter your operation. 1.push 2. pop 3. display");
	    scanf("%d",&oper);
	    if(oper==1)
		{ 
			push();
		}
		else if(oper==2)
		{
			pop();
		}
		else if(oper==3)
		{
			display();
		}
		else 
		{
			printf("invalid operation");
		
		}
	
}
	
}

void push()
{
    fflush(stdin);
printf("Enter the data to push:\n");
scanf("%d",&data);
stack=stack*10+data;
n++; 
}
void pop()
{
   if(n==-1)
 {
 printf("Stack Underflow..\n");
 }
else
{
data=stack%10;
 stack/=10;
 n--;
 printf("Data froom the top: %d\n",data);
}   
}


void display()
{
	int i;long int temp=stack;
if(n==-1)
{
printf("Stack is empty..\n");
return;
}
else
{
printf("The Stack elements are:\n");
i=pow(10,n+1);
do
{
i/=10;
printf("%d ",temp/i);
temp%=i;
}while(i>1);
printf("\n");
}
}
