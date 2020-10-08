//C program to implement Infix -> Postfix evaluation using stack.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Start of Stack ADT
struct node {
	int data;
	struct node *next;
};

typedef struct {
	struct node* TOP;
} STACK;
int push(STACK *, int );
int pop(STACK *, int *);
//End of stack ADT


//Function to insert an element in an array at 0th location.
void inser(char *a, int *len, int key) {
	for (int i = *len - 1; i >= 0; i--) {
		*(a + i + 1 ) = *(a + i);
	}
	*(a + 0) = key;
	(*len)++;
}
//Push for stack
int push(STACK *s, int key) {
	struct node *curr;
	curr = (struct node*)malloc(sizeof(struct node));
	if (curr == NULL) {
		printf("Stack Overflow");
		return 1;
	}

	curr->data = key;
	curr->next = s->TOP;
	s->TOP = curr;
	return 0;
}
//Pop for stack
int pop(STACK *s, int *m) {
	if (s->TOP == NULL) {
		printf("Stack Underflow\n");
		return 1;
	}
	(*m) = s->TOP->data;
	s->TOP = s->TOP->next;

	return 0;
}
//Checks if the character is operand or not
int is_operand(char c) {
	if (c >= 65 && c <= 122)
		return 1;
	else
		return 0;
}
//It gets the value/ precedence of a character 
int getv(char op) {
	int t;
	switch (op) {
	case '+':
		t = 1;
		break;
	case '-':
		t = 1;
		break;
	case '*':
		t = 2;
		break;
	case '/':
		t = 2;
		break;
	case '^':
		t = 3;
		break;
	}
	return t;
}

//Checks if the character present at left has higher precedence over the char present at right
int l_h(char a, char  b) {
	if (getv(a) <= getv(b) )
		return 1;
	else
		return 0 ;
}

//Checks if the character present at right has higher precedence over the char present at left
int h_l(char a, char b) {
	if (getv(a) > getv(b))
		return 1;
	else
		return 0;
}

//Global Stack
STACK s;


//Function for Infix to post fix
void in_post(const char *in) {
	char out[strlen(in) - 2];
	int i , k , m;
	i = k = 0;

	while (in[i] != '\0') {
		if (is_operand(in[i])) {
			out[k++] = in[i];
		}
		else if (in[i] == '(') {
			push(&s, in[i]);
		}
		else if (in[i] == ')') {
			while (1) {
				pop(&s, &m);
				if (m == '(')
					break;
				out[k++] = m;
			}
		}
		else {
			if (s.TOP == NULL) {
				push(&s, in[i]);
			}
			else {
				pop(&s, &m) ;
				if (m == '(' || l_h(m, in[i])) {
					push(&s, m);
					push(&s, in[i]);
				}
				else {
					out[k++] = m;
					continue;
				}
			}
		}
		i++;
	}

	while (s.TOP != NULL) {
		pop(&s, &m);
		out[k++] = m;
	}
	for (int i  = 0; i < sizeof(out); i++) {
		printf("%c", out[i]);
	}
}

int main() {
	s.TOP = NULL;
	char test[] = "a*b-(k+p-q)*d/m";

	in_post(test);
	
	return 0;
}

