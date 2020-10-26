#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *left;
struct node *right;
};
struct node* create_node(int );
void inorder(struct node *);
void  preorder(struct node *);
void postorder(struct node *);
int main()
{
    struct node *root=NULL;
    root=create_node(1);
    root->left=create_node(2);
    root->right=create_node(9);
    root->right->left=create_node(3);
    root->right->left->right=create_node(5);
     printf("inorder \n");
    inorder(root);
    printf("\n preorder \n");
    preorder(root);
     printf("\n postorder \n");
    postorder(root);
}
struct node * create_node(int v)
{
    struct node *curr;
    curr=(struct node*)malloc(sizeof(struct node));
    curr->left=curr->right=NULL;
    curr->data=v;
    return curr;
};
void inorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    if(root==NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
