#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void read_array(char a[],int n);
void print_array(char a[],int n);
int main(void)
{
    char a[100];
    int n;
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\nEnter the characters:");
    read_array(a,n);
    printf("\nThe array now is: ");
    print_array(a,n);
    getch();
    return 0;
}

void read_array(char a[],int n)
{
     int i;
     for(i=0;i<2*n;i++)
	 {   a[i]=getchar();
	 if(a[i]=='\n')
	 a[i-1]=a[i];
		 }
		 

}
void print_array(char a[],int n)
{
     int i;
     for(i=0;i<2*n;i++)
		{	
		
        printf("a[%d]=%c\n",i,a[i]);
		}
}