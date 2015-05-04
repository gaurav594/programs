#include<stdio.h>
struct node
{
int num;
struct node *left;
struct node *right;
};
typedef struct node node ;
node *root=NULL;
node *insert(node *tree,int num);
void preorder(node *tree);
void inorder(node *tree);
void postorder(node *tree);
int count=1;
int main()
{
int n,digit;
scanf("%d",&n);

while(1)
{
if(n==1)
{
puts("enter integer:to quit enter 0");
scanf("%d",&digit);
while(digit!=0)
{
root=insert(root,digit);
scanf("%d",digit);
}
}
else if(n==2)
{
puts("preorder tersversing the tree");
preorder(root);
}
else if(n==3)
{
puts("inorder tersversing the tree");
inorder(root);
}else if(n==4)
{
puts("postorder tersversing the tree");
postorder(root);
}
else
{
break;
}
}
return 0;
}

void preorder(node *p)
{
if(p!=NULL)
{
printf("%d\n",p->num);
preorder(p->left);
preorder(p->right);
}
}
void inorder(node *p)
{
while(p!=NULL)
{
inorder(p->left);
printf("%d",p->num);
inorder(p->right);
}
}