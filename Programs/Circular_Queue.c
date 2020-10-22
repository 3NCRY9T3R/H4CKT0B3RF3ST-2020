#include<stdio.h>
#include<conio.h>
#define N 5
int q[N],front=-1,rear=-1;

//insert a element in queue
void enqueue(int x)
{
if(rear==-1 && front==-1)
{
rear=front=0;
q[rear]=x;
}
else if((rear+1)%N==front)
{
printf("Queue is full.");
}
else
{
rear=(rear+1)%N;
q[rear]=x;
}
}

//delete element in queue
void dequeue()
{
if(front==-1 &&rear==-1)
{
printf("Queue is underflow");
}
else if(front==rear)
{
front=rear=-1;
}
else
{
//printf("%d",q[front]);
front=(front+1)%N;
}
}

//display all the elements
void display()
{
int i=front;
if(front==-1&&rear==-1)
{
printf("Queue is underflow");
}
else
{
while(i!=rear)
{
printf("%d\n",q[i]);
i=(i+1)%N;
}
printf("%d\n",q[rear]);
}
getch();
}

//main function
void main()
{
clrscr();
enqueue(1);
enqueue(5);
enqueue(3);
enqueue(9);
enqueue(10);
enqueue(11);
display();
dequeue();
display();
enqueue(14);
display();
getch();
}
