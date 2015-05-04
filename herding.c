
#include<stdio.h>
int R,C;
char map[1001][1001]={{'0'}};
int trap[1001][1001]={{0}};
int count,last;
int floodfill(int i,int j)
{
 if(i<0||j<0||i>=R||j>=C)
 {
  return -1;
 }
 else
 {
  if(trap[i][j])
  {
   count= trap[i][j];
   return count;
  
  }
  else
  {

   trap[i][j]=count;
   int max;
   switch(map[i][j])
   {
    case 'E':floodfill(i,j+1);break;
    case 'S':floodfill(i+1,j);break;
    case 'N':floodfill(i-1,j);break;
    case 'W':floodfill(i,j-1);break;
   
   }
   trap[i][j]=count;
  }

 
 }


}
int main()
{int i,j;
scanf("%d%d",&R,&C);
count=0;
last=0;
for(i=0;i<R;i++)
{
 for(j=0;j<C;j++)
 {

  scanf("%d",map[i][j]);
 }
}
for(i=0;i<R;i++)
{

for(j=0;j<C;j++)
{
 if(!trap[i][j])
 { 
  count=last+1;
  floodfill(i,j);
  if(count>last)
  {
   last++;
  }
  
  
  
 }
}
}

printf("%d\n",last);

return 0;
}