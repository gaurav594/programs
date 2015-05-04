#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
int data;
struct BST *lchild,*rchild;
}node;
void insert(node *,node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);