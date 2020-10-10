//C program to implement Queue using a stack.
//Queue using stack

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

//Stack ADT
typedef struct {
	int data[MAX];
	int top;
} stack;
int push(stack*,int);
int pop(stack*,int*);

//Globally declared, two stacks.
stack s[2];

//Pushes an element into the stack.
int push(stack *s, int num) {
	if (s->top == MAX - 1) {
		printf("Overflow\n");
		return 1;
	}
	s->top++;
	s->data[s->top] = num;
	return 0;
}

//Pops the element present at top from stack.
int pop(stack *s, int *m) {
	if (s->top == -1) {
		printf("Under Flow");
		return 1;
	}
	(*m) = s->data[s->top];
	s->top--;
	return 0;
}

//Checks if the stack is full(0) or empty(1)
int IsEmpty(stack s) {
	if (s.top == -1)
		return 1;
	return 0;
}


//Insert function to insert an element in the Queue(using stack)
int insert(int val) {
	return push(s, val);
}

//Function to delete an element from the Queue(using Stack).
int delet(int *m) {

	if ((IsEmpty(s[0])) && (IsEmpty(s[1]))) {
		printf("Not Possible\n");
		return 1;
	}
	int temp, p;
	if (!(IsEmpty(s[1]))) {
		p = pop(&s[1], &temp);
	}
	else {
		while (!(IsEmpty(s[0]))) {
			pop(s, &temp);
			push(&s[1], temp);
		}
		p = pop(&s[1], &temp);
	}
	*m = temp;
	return p;
}

int main() {
//Initialization
	s[0].top = s[1].top = -1;
  
	int  p = insert(10);
	printf("%d\n", p);
  
	delet(&p);
	printf("%d\n", p);

	return 0;
}
