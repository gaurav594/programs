#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	while(t!=0)
	{
		int v;
		int c=1;
		queue <int> Q;
		stack <int> S;
		for(i=0;i<t;i++)
		{
			cin>>v;
			Q.push(v);
		}
		
		while(!Q.empty()|| !S.empty())
		{
			if(!Q.empty() && Q.front()==c)
			{
				Q.pop();
				c++;
			}
			else 
			{   if(!S.empty() && S.top()==c)
				{
				S.pop();
				c++;
				}
				else{
					if(!Q.empty())
					{
						int s=Q.front();
						S.push(s);
						Q.pop();
					}
				else
				    {
					break;
				    }
						
					}
				}
			}
		if(c==t+1)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
		cin>>t;
}
return 0;
}