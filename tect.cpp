#include<bits/stdc++.h>
using namespace std;
int main()
{
set<string> s;
int t;
scanf("%d",&t);
while(t--)
	{
	int n,m;
	scanf("%d %d",&m,&n);
	string str;
	for(i=0;i<n;i++)
	{
		cin>>str;
		s.insert(str);
	}
	if(s.size()==n)
		printf("Yes");
	else
	    printf("No");
		
		s.clear();
	}
return 0;

}