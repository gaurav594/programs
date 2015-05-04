#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
int data;
struct node *left;
struct node *right;
}node;
node *root=NULL;
node *insert(node *tree,int num);

int count=1;
int main()
{
int t,n,i,digit;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&digit);
root=insert(root,digit);
}
}
return 0;
}
node *insert(node *p,int digit)
{
if(p==NULL)
{
p=(node*)malloc(sizeof(node));
p->left=p->right=NULL;
p->data=digit;
count++;
}
else
{
if(count%2==0)
{
p->left=insert(p->left,digit);
}
else
{
p->right=insert(p->right,digit);
}
}
}