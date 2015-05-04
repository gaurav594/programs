#include<stdio.h>
int solution(int X, int Y, int D) {
	int c=0;
 while(X<=Y )
 {
	 Y=Y-D;
	 c=c+1;
 }	 
 return c;
}
int main()
{
	int X,Y,D;
scanf("%d%d%d",&X,&Y,&D);
printf("%d",solution(X,Y,D));
return 0;
}