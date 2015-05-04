import java.util.Scanner;
class Fin
{
public static void main(String args[])
{
Scanner r=new Scanner(System.in);
String str=r.nextLine();
int l=str.length();
int i=0;
int j=0;
char s[]=str.toCharArray();
for(i=0;i<=l-1;i++)
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
String b = new String(s);
System.out.println(s);
}
}

