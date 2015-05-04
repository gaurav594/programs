#include<stdio.h>
#include<string.h>
int main()
{
char arr[20];
int j=0;

scanf("%s",arr);
int i=0;
while(arr[i]!='\0')
{
if(arr[i]!='%')
{
arr[j]=arr[i];
j++;
i++;
}
else
		{
			if(arr[i+1]=='2'&&arr[i+2]=='0')
			{
				arr[j]=' ';
				j++;
				i+=3;
			}
			else if(arr[i+1]=='3'&&arr[i+2]=='A')
			{
				arr[j]='?';
				j++;
				i+=3;
			}
			else if(arr[i+1]=='3'&&arr[i+2]=='D')
			{
				arr[j]='.';
				j++;
				i+=3;
			}
			else
			{
				arr[j]=arr[i];
				i++;
				j++;
			}
		}
		}
		arr[j]='\0';
puts(arr);
return 0;
}