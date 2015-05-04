#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,temp1,temp,temp2,val,val1;
		scanf("%d %d",&n,&k);
		list <int> ls;
		list <int> ::iterator it;
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			ls.push_back(temp);
		}
		for(it=ls.begin();it!=ls.end();)
		{
	       int temp1=*(ls.begin());
		   if(k==0)
		   {
			   break;
		   }
		   int val=*it;
		   it++;
		   int val1=*it;
		   if(val>val1)
		   {
			   continue;
		   }
		   else
		   {
			   --it;
			   ls.erase(it);
			   int temp2=*it;
			   if(temp1!=temp2)
			   {
				   --it;
			   }
			   else
			   {
				   it=ls.begin();
			   }
			   k--;
		   }
		}
		if(k!=0)
		{
			for(i=0;i<k;i++)
			{
				ls.pop_back();
			}
		}
		for(it=ls.begin();it!=ls.end();++it)
		{
			printf("%d",*it);
		}
		printf("\n");
	}
	return 0;
}