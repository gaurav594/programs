#include<stdio.h>
#include<math.h>
int arr[10000009];
int main()
{
long long int t,s=4,k,j,i,c=0,x1,y1,x2,y2,xt,yt,xx3,yy3,xx4,yy4,x13,y13,x14,y14,ph,pk1,pk2;
float x3,y3,x4,y4,xc,yc,xd,yd;
scanf("%d",&t);
long long int x[t],y[t];
for(i=1;i<=t;i++)
{
	scanf("%lld%lld",&x[i],&y[i]);
	ph=(x[i]*10)+y[i];
	arr[i]=ph;
}
for(i=1;i<t;i++)
	  {
	  x1=x[i];
	  y1=y[i];
	 c=0;
	
	  for(j=i+1;j<=t;j++)
	  {
	
	  x2=x[j];
	  y2=y[j];
	  if(abs(x2-x1)==abs(y2-y1))
	  { 
	  c=0;
	  float x11=(float)x1;
	  float x12=(float)x2;
	  float y11=(float)y1;
	  float y12=(float)y2;
			xc = (x11 + x12)/2 ;  yc = (y11 + y12)/2  ;    
			xd = (x11 - x12)/2  ;  yd = (y11 - y12)/2  ;   
 
			x3 = xc - yd  ;  y3 = yc + xd;			
			x4 = xc + yd  ;  y4 = yc - xd; 
	         pk1=(int)x3*10+(int)y3;
			 pk2=(int)x4*10+(int)y4;
			
			if(arr[pk1])
			{
			c=c+1;
			}
		
			 if(arr[pk2])
			{
			c=c+1;
			
			}
			
			c=2-c;
			if(c<s)
			{
			s=c;
			}
			c=0;	
			}
	  else 
	  {c=0;
	  xt=abs(x2-x1); yt=abs(y2-y1);
	  x13 = x1+yt ;  y13 = y1-xt;
      xx3 = x1-yt;  yy3 = y1+xt;	  
	  x14 = x2+ yt ;  y14 = y2- xt; 
	  xx4 = x2-yt;  yy4 = y2+ xt; 
	 
 
	        pk1=x13*10+y13;
			 pk2=x14*10+y14;
			
			if(arr[pk1])
			{
			c=c+1;
			}
		
			 if(arr[pk2])
			{
			c=c+1;
			
			}
			c=2-c;
			if(c<s)
			{
			s=c;
			}
			
			
			
			if(s>1)
			{
			c=0;
			  pk1=xx3*10+yy3;
			 pk2=xx4*10+yy4;
			
			if(arr[pk1])
			{
			c=c+1;
			}
		
			 if(arr[pk2])
			{
			c=c+1;
			
			}
			c=2-c;
			if(c<s)
			{
			s=c;
			}
			c=0;
			}
			
	  }
	  
 
	  }
	  }
	  printf("%d\n",s);
return 0;
} 