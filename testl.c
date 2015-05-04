#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
typedef struct Node node;
void insert(node *pointer,int n)
{
node *p=(node*)malloc(sizeof(node));
p->data=n;
p->next=NULL;
while(pointer->next!=NULL)
{
pointer=pointer->next;
}
pointer->next=p;
}
void reverse(node **pointer)
{
node *prev=NULL;
node *current=*pointer;
node *next;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
*pointer=prev;
}
void printList(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
}
void delete(node *pointer,int t)
{
node *temp;
while(pointer->data!=t)
{
temp=pointer;
pointer=pointer->next;
}
temp->next=pointer->next;
free(pointer);
}
int main(){
int n,item,t;
node *start,*temp;
        start = (node *)malloc(sizeof(node));
        start->data=0;		
        temp = start;
        temp -> next = NULL;
while(1)
{
scanf("%d",&n);
if(n==1)
{
scanf("%d",&item);
insert(start,item);
}
else if(n==2)
{
reverse(&start->next);
}
else if(n==3)
{
printList(start->next); 
}
else if(n==4)
{
scanf("%d",&t);
delete(start,t);
}
else if(n==0)
{
break;
}
}
return 0;
}