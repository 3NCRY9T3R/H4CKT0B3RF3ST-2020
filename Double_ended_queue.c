#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct {
	int data[MAX];
	int front;
	int rear;
} dequeue;

int insert(dequeue *q, int key, int end) {
	if (q->rear == MAX - 1) {
		printf("dequeue Full\n");
		return 1;
	}
	if (q->rear == -1) {
		q->front = q->rear = 0;
		q->data[q->rear] = key;
	}
	else if (end == 0) {
		q->front = (q->front + MAX - 1) % MAX;
		q->data[q->front] = key;
	}
	else {
		q->rear = (q->rear + 1) % MAX;
		q->data[q->rear] = key;
	}
	return 0;
}


int delet(dequeue *q, int *m, int end) {
	if (q->front == -1) {
		printf("dequeue empty\n");
		return 1;
	}
	if (q->front == q->rear) {
		*m = q->data[q->front];
		q->front = q->rear = -1;
	}
	else if (end == 0) {
		*m = q->data[q->front];
		q->front = (q->front + 1) % MAX;
	}
	else {
		*m = q->data[q->rear];
		q->rear = (q->rear + MAX - 1) % MAX;
	}
	return 0;
}

void display(dequeue q) {
	for (int i = 0; i <= q.rear; i++) {
		printf("%d ", q.data[i]);
	}
	printf("\n");
}

int main() {

	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);

	dequeue q1;
	q1.rear = q1.front = -1;

	insert(&q1, 15, 1);
	insert(&q1, 12, 0);
	insert(&q1, 1, 1);
	display(q1);

	int m;
	delet(&q1, &m, 0);
	printf("\n %d\n ", m);
	display(q1);

	return 0 ;
}
