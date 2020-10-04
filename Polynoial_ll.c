#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	int index;
struct node *next;
}nod;

void create(nod **h,int n){
	struct node *curr,*ptr;
	int i;
	for(i=0;i<n;i++){
		curr=(nod *)malloc(sizeof(nod));
		curr->data=random()%10;
		curr->index=random()%2;
		curr->next=NULL;
		if(*h==NULL){
			*h=curr;
			ptr=curr;
		}
		else{
			ptr->next=curr;
			ptr=curr;
		}
	}
}

void simply(nod **h,int n){
	nod *first=*h,*sec,*third,*ptr;
	for(int i=0;i<n/3;i++){
		sec=first->next;
		third=sec->next;
		if((first->index==sec->index)&&(first->index!=third->index)){
			first->next=third;
			sec->next=third->next;
			third->next=sec;
		}
 		if((third->index==sec->index)&&(first->index!=third->index)){
 			first->next=third;
			sec->next=first;	
			if(i==0){
				*h=sec;
			}
			else{
				ptr->next=sec;	
			}
		}
		if((first->index==third->index)&&(sec->index!=third->index)){
			first->next=sec->next;
			free(sec);
		}
	ptr=third;
	first=third->next;
	}
}

void display(nod *h){
	nod *curr;
	for(curr=h;curr!=NULL;curr=curr->next){
		printf("(%d %d) \t",curr->data,curr->index);
		
	}
}

int main(){
	nod *head=NULL;
	int n;
        do{
        printf("Enter the number of nodes to be created\n");
        scanf("%d",&n);
        }while(n%3 != 0);
	create(&head,n);
	display(head);
	simply(&head,n);
	printf("\n");
	display(head);
	return 0;
}
