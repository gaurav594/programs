#include<stdio.h>
int main()
{
int t,a,b;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&a,&b);
if(b==0)
printf("Airborne wins.\n");
else
printf("Pagfloyd wins.\n");
}
return 0;
}