#include<cstdio>
#include<stack>
using namespace std;
int main()
{  
     stack <int> S;
     int t;
	 
	while(1)
	{  scanf("%d",&t);
        if( t == 0)
		{
			break;
		}
        int i;
		int arr[1000];
		int c=1;
        int f=0;
		int k=0;
		for(i=0;i<t;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<t;i++)
		{
			if(arr[i]==c)
			{
				c++;
			}
			else if(arr[i]!=c)
			{
		     S.push(arr[i]);		
			}
		}
		while(!S.empty())
		{    k=S.top();
			if(S.top()!=c)
			{
				printf("no\n");
				f=1;
				break;
			}
			else if(S.top()==c)
			{   S.pop();
				c++;
			}
		}
		if(k==c-1)
		{
			printf("yes\n");
		}
	
	}
return 0;
}