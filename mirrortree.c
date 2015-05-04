#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct BST
{
    int data;
	bool visited;
    struct BST *lchild,*rchild;
}node;
void insert(node *,node *,int);
void printright(node *);
void printleft(node *,int);
int maxlevel=0;
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
int c=1;
while(c!=n+1)
{
             new_node=get_node();
          
             scanf("%d",&new_node->data);

             if(root==NULL) 
                 root=new_node;
             else
                 insert(root,new_node,c);
c++;
           
}

printleft(root,1);
    
printf("\n");      
}
}

node *get_node()
 {
 node *temp;
 temp=(node *)malloc(sizeof(node));
 temp->lchild=NULL;
 temp->rchild=NULL;
 temp->visited=false;
 return temp;
 }

void insert(node *root,node *new_node,int c)
{
  if(c%2==0)
     {
     if(root->lchild==NULL)
         root->lchild = new_node;
     else
         insert(root->lchild,new_node,c);
     }

  if(c%2!=0)
     {
     if(root->rchild==NULL)
         root->rchild=new_node;
     else
         insert(root->rchild,new_node,c);
     }
}
void printleft(node *root,int level)
{
	if(root==NULL)
		return;
	if(maxlevel<level)
	{
		if(root->visited==false)
			printf("%d\n",root->data);
		maxlevel=level;
		root->visited=true;
	}
	printleft(root->lchild,level+1);
	printleft(root->rchild,level+1);
}
 
void printright(node *root)
{
    
	while(root->rchild!=NULL)
	{
	printf("%d",root->data);
	root=root->rchild;
	if(root->rchild==NULL)
	return;
	}
}     
 