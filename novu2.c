#include<stdio.h>
int main()
{
int t,c,f,i,j,k;
int arr[7];
int arrr[6];
for(i=0;i<7;i++)
{
scanf("%d",&arr[i]);
}
for(t=0;t<5;t++)
{
c=0;
f=0;
for(j=0;j<6;j++)
{
scanf("%d",&arrr[j]);
}
for(i=0;i<6;i++)
{
k=arrr[i];
for(j=0;j<7;j++)
{
if(k==arr[j])
{
c=c+1;
break;
}
if(k==arr[6])
{
f=1;
break;
}
}
}
if(c==6)
{
printf("First Parking slot");
printf("\n");
}
else if(c==5&&f==1)
{
printf("Second Parking slot");
printf("\n");
}
else if(c==5)
{
printf("Third Parking slot");
printf("\n");
}
else if(c==4)
{
printf("Fourth Parking slot");
printf("\n");
}
else if(c==3)
{
printf("Fifth Parking slot");
printf("\n");
}
else if(c==2||c==1||c==0)
{
printf("No Parking slot");
printf("\n");
}
}
return 0;
}