#include<stdio.h>
int main(){
    int num,r,sum,temp;
    int min,max;
	int t;
	scanf("%d",&t);
	while(t--)
	{int c=0;
    scanf("%d",&min);
    scanf("%d",&max);
    for(num=min;num<=max;num++){
         temp=num;
         sum=0;
         while(temp){
             r=temp%10;
             temp=temp/10;
             sum=sum*10+r;
         }
         if(num==sum)
             c++;
    }
	printf("%d\n",c);
	}
    return 0;
}