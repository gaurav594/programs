#include <stdio.h>
#include <stdlib.h>
typedef struct BST
{
    int data;
	int a;
    struct BST *lchild,*rchild;
}node;
void insert(node *,node *);
void inorder(node *);
int c=1;

void main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 node *new_node,*root,*tmp,*parent;
 node *get_node();
 root=NULL;
int n;
scanf("%d",&n);

int o=1;
while(o!=n+1)
{
             new_node=get_node();
          
             scanf("%d",&new_node->data);

             if(root==NULL)
				{			 
                 root=new_node;
				 root->a=c;
				 c++;
				 }
             else
                 insert(root,new_node);
    o++;       
}
inorder(root);   
printf("\n");      
}
}

node *get_node()
 {
 node *temp;
 temp=(node *)malloc(sizeof(node));
 temp->lchild=NULL;
 temp->rchild=NULL;
 return temp;
 }

void insert(node *root,node *new_node)
{
if((root->a)%2==0)
     {
     if(root->lchild==NULL)
	 {
         root->lchild = new_node;
		 root->a=c;
		 c++;
		 }
     else
         insert(root->lchild,new_node);
     }

  if((root->a)%2!=0)
     {
     if(root->rchild==NULL)
	 {
         root->rchild=new_node;
		 root->a=c;
		 c++;
		 }
     else
         insert(root->rchild,new_node);
     }
}

void inorder(node *temp)
{ int arr[100000]={0};
node *ks=temp->lchild;
   while(temp->rchild!=NULL&&temp->data!=0)
    {
	int k=temp->data;
	
	if(arr[k]!=1)
	printf("%d\n",temp->data);
	arr[k]=1;
	temp=temp->rchild;
    }
	
}
