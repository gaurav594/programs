#include <stdio.h>
#include <stdlib.h>
typedef struct BST
{
    int data;
    struct BST *lchild,*rchild;
}node;
void insert(node *,node *,int);
void print(node *);
void printGivenLevel(node *root, int level);
int height(node *node);

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
print(root);   
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

void print(node *root)
{
  int h = height(root);
  int i;
  for(i=1; i<=h; i++)
    printGivenLevel(root, i);
}     
 
/* Print nodes at a given level */
void printGivenLevel(node *root, int level)
{
  if(root == NULL)
    return;
  if(level == 1)
    printf("%d ", root->data);
  else if (level > 1)
  {
    printGivenLevel(root->lchild, level-1);
    printGivenLevel(root->rchild, level-1);
  }
}
 
/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(node *node)
{
   if (node==NULL)
       return 0;
   else
   {
     /* compute the height of each subtree */
     int lheight = height(node->lchild);
     int rheight = height(node->rchild);
 
     /* use the larger one */
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
} 
