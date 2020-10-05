/*C program to  Implement a stack using an array, of which,there are two tops, one grows towards right side,
 the other grows towards left side.*/
//Or in other words, on top exands, while the other one shrinks.

//This kind of stacks have various applications, and in real life, it can be seen as two waiters, serving food on a common table from opposite sides.
//While serving,they are moving towards each other.
//While going away, they are moving away from each other.

#include<stdio.h>
#include<stdlib.h>

#define MAX 10
typedef struct{
	int data[MAX];
	int top1;
	int top2;
}STACK;

// Pushes an element. op ==> 1 to push from right side, and vice-versa.
int push(STACK *s,int val,int op){					
	//push() from left side/having top1
   if(op == 0){									
   	    if(s->top1 == MAX || s->top1 == s->top2 - 1){
   	  		printf(" Stack Over Flow \n");
   	  		return 1;
   	    }
   	    else{
   	  		s->top1++;
   	  		s->data[s->top1] = val;
   	    }
   }
   //push() from right side/having top2
   else{											
        if(s->top2 == -1 || s->top2 == s->top1 + 1){
   	  		printf(" Stack Over Flow \n");
   	  		return 1;
   	    }
   	    else{
   	  		s->top2--;
   	  		s->data[s->top2] = val;
   	    }
   }
   return 0;
 }

// Pops an element. op ==> 1 to pop from right side, and vice-versa.
int pop(STACK *s,int *k,int op){
	if(op == 0){
		if(s->top1 > -1){
			*k = s->data[s->top1];
			s->top1--;
			return 0;
			
		}
		else{
			printf("UNDERFLOW\n");
			return 1;
		}
	}
	else{
		if(s->top2 < MAX){
			*k = s->data[s->top2];
			s->top2++;
			return 0;
			
		}
		else{
			printf("UNDERFLOW\n");
			return 1;
		}
	}	
}

void Display(STACK s){
	while(s.top2 != -1){
		printf("%d ",s.data[s.top2]);
		s.top2--;
	}
}

int main(){

	STACK s;
	s.top1 = -1;
	s.top2 = MAX;

    int m;
    push(&s,3,0);
    push(&s,3,1);
    push(&s,4,0);
    push(&s,8,1);
    push(&s,6,0);
    push(&s,3,1);
    push(&s,2,0);
    push(&s,-4,1);
    push(&s,-5,0);
    push(&s,-23,1);
    push(&s,-12,0);


    //The stack should look like this:==>
    //3 4 6 2 -5 -23 -4 3 8 3.
    //top1 == -5
    //top2 == -23



    pop(&s,&m,0);
    printf("Popped element is ==> %d\n",m);

    pop(&s,&m,1);
    printf("Popped element is ==> %d\n",m);
    

return 0;

}
