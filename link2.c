#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
        int data;
        struct Node *next;
}node;
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
void print(node *pointer)
{
        if(pointer==NULL)
        {
                return;
        }
        printf("%d ",pointer->data);
        print(pointer->next);
}
void reverse(node *pointer)
{
if(pointer->next==NULL)
return;
reverse(pointer->next);
printf("%d",pointer->data);
}

void delete(node *pointer)
{
node *n;
n=pointer->next;
if(pointer==NULL)
{
printf("the linklist is empty");
}
while(pointer->next!=NULL)
{
n=pointer->next;
pointer=pointer->next->next;
}
free(pointer);
n->next=NULL;
 
}
void revers(node *head_ref)
{
    struct node *prev   = NULL;
    struct node *current = *head_ref;
    struct node *next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
	
}

int main()
{
int q,no;
node *start,*temp;
start=(node*)malloc(sizeof(node));
temp = start;
temp -> next = NULL;
while(1)
{
scanf("%d",&q);
if(q==1)
{
scanf("%d",&no);
insert(start,no);
}
else if(q==2)
{
print(start->next);
}
else if(q==3)
{
reverse(start->next);
}
else if(q==4)
{
revers(start->next);
}
else if(q==5)
{
delete(start->next);

}
else if(q==6)
{
break;
}
}
return 0;
}