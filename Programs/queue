#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int data[10];
    int front;
    int rear;
}Queue;
    int insert(Queue *q,int v)
    {
            if(q->rear==9)
            {
            printf("QF");
            return 1;
            }
    if(q->front==-1)
    {
        q->front=q->rear=0;
        q->data[q->rear]=v;
    }
else{
    q->rear++;
    q->data[q->rear]=v;
    }
return 0;
}
int delete(Queue *q,int *m)
{
    if(q->front==-1)
    {
        printf("Empty\n");
        return 1;
    }
    if(q->front==q->rear)
    {
        *m=q->data[q->front];
        q->front=q->rear=-1;
    }
    else{
        *m=q->data[q->front];
        q->front++;
    }
    return 0;

}
int main()
{
    Queue q;
    int m;
    q.front=q.rear=-1;
    int a=insert(&q,15);
     int p=delete(&q,&m);
    printf("%d",p);
}
