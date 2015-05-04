#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
void insert(node pointer,int data)
{
while(pointer->next!=NULL)
{
pointer=pointer->next;
}
pointer=(node*)malloc(sizeof(node));
pointer=pointer->next;
pointer->data=data;
pointer->next=NULL;
}
void delete(node pointer,int data)
{
        while(pointer->next!=NULL && (pointer->next)->data != data)
        {
                pointer = pointer -> next;
        }
        if(pointer->next==NULL)
        {
                printf("Element %d is not present in the list\n",data);
                return;
        }
		node *temp;
		temp=pointer->next;
		pointer->next=temp->next;
		free(temp);
        return;
}
int main{
int n;
node *start,*temp;
start=(node*)malloc(sizeof(node));
temp=start;
temp->next=NULL;
   printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Print\n");
        printf("4. Find\n");
while(1)
{
scanf("%d",&n);
switch(n)
{
case 1:int data;
scanf("%d",&data);
insert(start,data);
break;
case 2:
int data;
delete(start,data);
break;
case 3:
printf("the list is");
print(start->next);
print("\n");
break;
case 4:
int data;
scanf("%d",&data);
int status=find(start,data);
if(status)
{
printf("element found");
}else
{
printf("element not found");
}
break;
default:break;
}
}
return 0;
}