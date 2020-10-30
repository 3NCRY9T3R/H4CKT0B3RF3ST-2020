//enqueue function costly
#include<stdio.h>
#include<stdbool.h>

#define MAX 15
typedef struct
{
    int data[MAX];
    int top;
}Stack;
void enqueue(Stack *,Stack *,int );
int dequeue(Stack *,Stack *);

void push(Stack *,int );
int pop(Stack *);
int peek(Stack *);
bool isEmpty(Stack *);
void display(Stack );
int n=MAX;
int num;
void main()
{
    Stack s1,s2;
    s1.top=-1;
    s2.top=-1;
    int option,value;
	do{
		printf("\n*MAIN MENU*");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Peek");
		printf("\n4.Display");
		printf("\n5.EXIT");

		printf("\nEnter your option");
		scanf("%d",&option);

		switch(option){

			case 1:
				printf("enter value to be enqueued\n");
				scanf("%d",&value);
				enqueue(&s1,&s2,value);
				break;
			case 2:
				value=dequeue(&s1,&s2);
				if(value!=-1)
					printf("dequeued value is : %d\n",value);
				break;

			case 3:
				value=peek(&s1);
				printf("value at front of queue is : %d",value);
				break;

			case 4:
				printf("the queue is :\n");
				display(s1);
				break;
		}
	}while(option!=5);

}

//enque and deque fkn

void enqueue(Stack *s1,Stack *s2,int value)
{
	while(!isEmpty(s1)){

		num=pop(s1);

		push(s2,num);
	}

	push(s2,value);
    while(!isEmpty(s2)){
		num=pop(s2);
		push(s1,num);
    }

}

int dequeue(Stack *s1,Stack *st2)
{
	int popped;
	popped=pop(s1);
	return popped;

}

//stack push,pop,peek,isEmpty,display functions

void push(Stack *s,int val)
{
  if(s->top==(n-1))
   printf("\nStack overflow");

   else
   {

        s->top++;
        s->data[s->top]=val;
   }
}

int pop(Stack *s)
{

  if(s->top==-1)
  {
   printf("\nStack underflow");
   return -1;
  }

  else
  {
      int m=s->data[s->top];
      s->top--;
      return m;

  }
}

int peek(Stack *s)
{
  if(s->top==-1)
  {
   printf("\nStack underflow");
   return -1;
  }

  else
  {
   return s->data[s->top];
  }
}

bool isEmpty(Stack *s)
{
	if(s->top==-1)
		return true;
	else
		return false;

}

void display(Stack s)
{
    int i;
    if(s.top==-1)
    {
     printf("\nStack is empty");
    }

  else
  {
      int m=s.top;
    for(i=m;i>=0;i--)
      printf("%d ",s.data[i]);
  }
}
