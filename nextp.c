#include<stdio.h>
void swap(char *i,char *j)
{
	char temp=*i;
	*i=*j;
	*j=temp;
}
void reverse(char a[],int start,int end)
{
	int i;
	for(i=start;i<=(int)(start+end)/2;i++)
	swap(&a[i],&a[end-i+start]);
}
int main()
{
	int i,j,k;
	int n,t;
	char s[30];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		if(n<2)
		{
			printf("ERROR\n");
			return 0;
		}
		for(i=n-1;i>0;i--)
		{
			if(s[i-1]<s[i])
			break;
		}
		//printf("i=%d\n",i);
		if(!i)
		{
			printf("ERROR\n");
			return 0;
		}
		for(j=n-1;j>=i;j--)
		{
			if(s[j]>s[i-1])
			break;
		}
		//printf("j=%d\n",j);
		swap(&s[i-1],&s[j]);
		//printf("%s\n",s);
		reverse(s,i,n-1);
		printf("%s\n",s);
	}
	return 0;
}
