#include<stdio.h>
int main()
{
int t,i;
int c[100];
int ax,ay,bx,by,cx,cy;
int area;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
area=((ax*(by-cy))+(bx*(cy-ay))+(cx*(ay-by)))/2;
printf("%d",area);
}

return 0;
}

