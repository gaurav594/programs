#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
    int data;
    struct node* left;
    struct node* right;
}node;
node *root=NULL;
node *newNode(int data) 
{
  node *node=(node *)malloc(sizeof(node));
  if(node==NULL)
  {
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  }
  else if(node->data>data)
  {
  newNode(node->left->data);
  }
  else
  {
  newNode(node->right->data);
  }
  return(node);
}
void print(node *pointer)
{
        if(pointer==NULL)
        {
                return;
        }
		print(pointer->left);
        printf("%d ",pointer->data);
        print(pointer->right);
}
/* Driver program to test size function*/   
int main()
{
printf("enter 1 to insert");
int n,k;
scanf("%d",&n);
while(1)
{
if(n==1)
{
scanf("%d",&k);
root = newNode(k); 
}
else if(n==2)
{
print(root);
} 
}
  return 0;
}