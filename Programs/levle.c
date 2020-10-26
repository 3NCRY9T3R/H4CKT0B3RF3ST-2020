#include<stdio.h>

struct Node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct
{
    struct Node *val;
    int front,rear;
}Queue;
struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}
void insert(Queue *q,struct Node *x)
{
    if(q->front==-1)
    {
        q->front=q->rear=0;
        q->(val+q->rear)=x;
    }
    else
    {
        q->rear++;
        q->(val+q->rear)=x;
    }
}
void level_order(struct Node *root)
{
    if(root==NULL)
    {
        printf("empty");
        return;
    }
    Queue *q=NULL;
    q->front=q->rear=-1;
    insert(q, root->data);
    insert(q,NULL);
    while(size(q)>1)
    {   int m=top(q);
        struct Node *curr=createnode(m);
        pop(q);
        if(curr==NULL)
        {
            printf("\n");
            insert(q,NULL);
            continue;
        }
        printf("%d ",curr->data);
        if(curr->left!=NULL)
            insert(q,curr->left);
        if(curr->right!=NULL)
            insert(q,curr->right);
    }
}
int main()
{

}
