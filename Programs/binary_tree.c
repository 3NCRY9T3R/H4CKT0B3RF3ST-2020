#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
}*root=NULL;
int main(){int n;
    while(n!=5){
    printf("Enter choice\n");
    printf("1:Insertion\n2:Deletion\n3:Display\n4:Search\n5:Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:insertion();break;
        case 2:deletion();break;
        case 3:print_preorder(root);break;
        case 4:search();break;
        case 5:break;
    }
    }
}
insertion(){struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");scanf("%d",&n->data);
    n->left=NULL;n->right=NULL;
    if(root==NULL){
        printf("Tree is empty\nElement inserted as root node\n");
        root=n;
    }
    else{struct node *t=root;
    while(t->left!=NULL && t->right!=NULL)
    {
        if(n->data < t->data)
            t=t->left;
        else
            t=t->right;
    }
    if(n->data < t->data)
        t->left=n;
    else
        t->right=n;
}
}

    void print_preorder(struct node *t) {
        if(t==NULL){
        	return;
		}
         printf("%d\n",t->data);
     print_preorder(t->left);
     print_preorder(t->right);
     
 }
    

deletion(){
    printf("Delete");
}
search(){
    printf("Search\n");
}
