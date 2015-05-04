#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
typedef struct Node node;
void insert(node *pointer, int data)
{        
        node *p=(node *)malloc(sizeof(node));
		p->data=data;
		p->next=NULL;
		
        while(pointer->next!=NULL)
        {
                pointer = pointer -> next;
        }
        /* Allocate memory for the new node and put data in it.*/
        pointer->next = p;
        pointer = pointer->next;
        pointer->next = p->next;
}
void reverse(node** head_ref)
{
   node* prev   = NULL;
  node* current = *head_ref;
    node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
void middle(node *pointer)
{
node *fast=pointer;
node *slow=pointer;
if(pointer!=NULL)
{
while(fast->next!=NULL)
{
	fast=fast->next->next;
	slow=slow->next;
}
}
printf("%d",slow->data);
}
void delete(node *pointer)
{
	node *temp;
while(pointer->next!=NULL)
{
	temp=pointer;
	pointer=pointer->next;
}
temp->next=pointer->next;
	free(pointer);
}
void print(node *pointer)
{
if(pointer==NULL)
        {
                return;
        }
        printf("%d ",pointer->data);
        print(pointer->next);
}
void deletelist(node *pointer)
{
node *temp;
while(pointer->next!=NULL)
{
temp=pointer->next;
free(pointer);
pointer=temp;
}
pointer=NULL;
}
int main()
{int s,n;
node *temp;
node *start=(node*)malloc(sizeof(node));
temp = start;
temp -> next = NULL;
printf("enter choice");
printf("1)enter2)delete3)print4)reverse5)middle6)deletewholelist");

while(1)
{
scanf("%d",&s);
if(s==1)
{
scanf("%d",&n);
insert(start,n);
}
else if(s==2)
{

(start);
}
else if(s==3)
{
print(start->next);
}
else if(s==4)
{
reverse(&start->next->next->next);
}
else if(s==5)
{
middle(start);
}
else if(s==6)
{
deletelist(start);
}
else if(s==0)
{
break;
}

}
return 0;
}