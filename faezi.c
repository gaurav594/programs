#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start=NULL;
void create()
{
char ch;
do
{
struct node *new_node,*current;
new_node=(struct node *)malloc(sizeof(struct node));
printf("\n enter the no to be entered ");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(start==NULL)
{
start=new_node;
current=new_node;
}
else
{
current->next=new_node;
current=new_node;
}
printf("do you want to continue");
ch=getche();
}
while(ch!='n');

}
void display()
{
struct node *new_node;
printf("the linked list is");
new_node=start;;
while(new_node!=NULL)
{
printf("the data is %d",new_node->data);
new_node=new_node->next;
}
printf(NULL);
}
void main()
{
create();
display();
}