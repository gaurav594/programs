#include<stdio.h>
char c1,c2,a[80];
void main()
{
 clrscr();
 find_rep();
 getch();
}
void find_rep(void)
{
 char c1,c2;
 char a[80];
 int i,j,k;
 printf("Enter a line of text below:-");
 printf("Press Enter after line..");
 printf("You Have Entred:-  ");
 gets(a);
 printf("Enter the replaceable & replacing letter respectively:-  ");
 scanf("%c %c %c",&c1,' ',&c2);

 for (j=0;j<80;j++)
 {
   if (a[j]==c1)
   a[j]=c2;
 }
 puts(a);
 printf("Here all %c are replaced by %c.", c1,c2);
 return;
}