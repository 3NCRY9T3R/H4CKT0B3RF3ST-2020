#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct poly
{
 int coef;
 int pow;
 struct poly *next;
};
struct poly *first,*first1,*first2,*first3;
void create(int flag)
{
struct poly *first=NULL;
struct poly *ptr,*cpt;
char ch;
ptr=(struct poly *)malloc(sizeof(struct poly));
printf("Enter coefficient of term of %d polynomial :",flag);
scanf("%d",&ptr->coef);
printf("enter the power of %d polynomial :",flag);
scanf("%d",&ptr->pow);
first=ptr;
do
{
cpt=(struct poly *)malloc(sizeof(struct poly));
printf("Enter the coefficient of next term of %d polynomial :",flag);
scanf("%d",&cpt->coef);
printf("enter the power of %d polynomial :",flag);
scanf("%d",&cpt->pow);
ptr->next=cpt;
ptr=cpt;
printf("Press Y for continue:\n");
ch=getch();
}
while(ch=='Y'|| ch=='y');
ptr->next=NULL;
if(flag==1)
first1=first;
if(flag==2)
first2=first;
}
void traverse(struct poly *first)
{
 struct poly *ptr;
 ptr=first;
 printf("The equation is : ");
 printf("%dx^%d",ptr->coef,ptr->pow);
 while(ptr->next!=NULL)
 {
	if(ptr->next->coef>=0)
	{
		if(ptr->next->pow==0)
		{
			printf("+%d",ptr->next->coef);
		}
		else
    printf("+%dx^%d",ptr->next->coef,ptr->next->pow);
    }
   else if(ptr->next->pow==0)
   {
	printf("%d",ptr->next->coef);
   }
   else
   printf("%dx^%d",ptr->next->coef,ptr->next->pow);
  ptr=ptr->next;
}}
void merge()
{struct poly *ptr1,*ptr2,*ptr3,*pnode;
ptr1=first1;
ptr2=first2;
while(ptr1!=NULL || ptr2!=NULL)
{
pnode=(struct poly *)malloc(sizeof(struct poly));
pnode->next=NULL;
if(first3==NULL)
first3=ptr3=pnode;
else
{
ptr3->next=pnode;
ptr3=pnode;
}
if(ptr1->pow>ptr2->pow)
{
ptr3->coef=ptr1->coef;
ptr3->pow=ptr1->pow;
ptr1=ptr1->next;
}
else if(ptr1->pow<ptr2->pow)
{
ptr3->coef=ptr2->coef;
ptr3->pow=ptr2->pow;
ptr2=ptr2->next;
}
else
{
ptr3->pow=ptr1->pow;
ptr3->coef=ptr1->coef+ptr2->coef;
ptr1=ptr1->next;
ptr2=ptr2->next;
}
}
while(ptr1!=NULL)
{
pnode=(struct poly *)malloc(sizeof(struct poly));
pnode->next=NULL;
if(first3==NULL)
first3=ptr3=pnode;
else{
ptr3->next=pnode;
ptr3=pnode;}
ptr3->coef=ptr1->coef;
ptr3->pow=ptr1->pow;
ptr1=ptr1->next;
}
while(ptr2!=NULL)
{
pnode=(struct poly *)malloc(sizeof(struct poly));
pnode->next=NULL;
if(first3==NULL)
first3=ptr3=pnode;
else{
ptr3->next=pnode;
ptr3=pnode;}
ptr3->coef=ptr2->coef;
ptr3->pow=ptr2->pow;
ptr2=ptr2->next;
}
}
void sort(struct poly *first) 
{ 
struct poly *ptr,*cpt; 
int temp1,temp2; 
ptr=first; 
printf("\nSorted polynomial:"); 
while(ptr!=NULL) 
{ 
cpt=ptr->next; 
while(cpt!=NULL) 
{ 
if(ptr->pow<cpt->pow) 
{ 
temp1=ptr->coef;
temp2=ptr->pow; 
ptr->coef=cpt->coef; 
ptr->pow=cpt->pow;
cpt->coef=temp1;
cpt->pow=temp2;
} 
cpt=cpt->next; 
} 
ptr=ptr->next; 
} 
printf("\n");
}
main()
{
	first1=first2=first3=NULL;
 printf("Akshat Agrawal\n");
 printf("Enter the coefficient and power of the standard polynomial ax^(n)+bx^(n-1)+cx^(n-2)+.......+zx^(n-n)\n");
 create(1);
 traverse(first1);
sort(first1);
traverse(first1);
printf("\n");
 create(2);
 traverse(first2);
 sort(first2);
 traverse(first2);
 merge();
 printf("\nAddition of Two Polynomials\n");
 traverse(first3);
}


