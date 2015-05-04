#include<iostream>
using namespace std;
void decode(string &s)
{
	int i=0,j=0;
	while(s[i]!='\0')
	{
		if(s[i]!='%')
		{
			s[j]=s[i];
			j++;
			i++;
		}
		else
		{
			if(s[i+1]=='2'&&s[i+2]=='0')
			{
				s[j]=' ';
				j++;
				i+=3;
			}
			else if(s[i+1]=='3'&&s[i+2]=='A')
			{
				s[j]='?';
				j++;
				i+=3;
			}
			else if(s[i+1]=='3'&&s[i+2]=='D')
			{
				s[j]='.';
				j++;
				i+=3;
			}
			else
			{
				s[j]=s[i];
				i++;
				j++;
			}
		}
	}
	s[j]='\0';
}

int main()
{
	string s;
	cout<<"Enter the string. \n";
	cin>>s;
	cout<<"Before="<<s<<"\n";
	decode(s);
	cout<<"After="<<s;
	return 0;	
}