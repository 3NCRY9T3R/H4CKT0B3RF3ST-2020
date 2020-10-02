#include<stdio.h>
#include<stdlib.h>
struct node
{
    int cf,exp;
    struct node *next;
};
void create(struct node **h)
{
    struct node *cur,*ptr;
    int n;
    printf("Enter no of nodes u want to create:");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        cur=(struct node*)malloc(sizeof(struct node));
        printf("eEnter the coefficient and enponential of %d node:",(i+1));
        scanf("%d%d",&cur->cf,&cur->exp);
        cur->next=NULL;
        if(*h==NULL)
        {
            *h=cur;
            ptr=cur;
        }
        else
        {
            ptr->next=cur;
            ptr=ptr->next;
        }
    }
}

void multiply(struct node *h1,struct node *h2,struct node **h3)
{
    struct node *cur,*ptr,*p1,*p2;
    for(p1=h1;p1!=NULL;p1=p1->next)
    {
        for(p2=h2;p2!=NULL;p2=p2->next)
        {
            cur=(struct node*)malloc(sizeof(struct node));
            cur->cf=p1->cf*p2->cf;
            cur->exp=p1->exp+p2->exp;
            cur->next=NULL;
            if(*h3==NULL)
            {
                *h3=cur;
                ptr=cur;
            }
            else
            {
                ptr->next=cur;
                ptr=ptr->next;
            }
        }
    }
}

void simplify(struct node *h)
{
    struct node *p1,*p2,*r;
    for(p1=h;p1!=NULL;p1=p1->next)
    {
        p2=p1->next;
        r=p1;
        while(p2!=NULL)
        {
            if(p1->exp==p2->exp)
            {
                p1->cf=p1->cf+p2->cf;
                r->next=p2->next;
                free(p2);
                p2=r;
            }
            r=p2;
            p2=p2->next;
        }
    }
}

void display(struct node *h)
{
    struct node *p;
    printf("\nDisplaying multiplication of polynomial by linked list:\n");
    for(p=h;p!=NULL;p=p->next)
    printf("%dx^%d + ",p->cf,p->exp);
}

int main()
{
    struct node *h1,*h2,*h3;
    h1=h2=h3=NULL;
    printf("Creation of 1st polynomial:\n");
    create(&h1);
    printf("Creation of 2nd polynomial:\n");
    create(&h2);
    multiply(h1,h2,&h3);
    simplify(h3);
    display(h3);
    return 0;
}
