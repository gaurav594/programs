import java.util.*;
class Lcss
{
int max(int a, int b)
{
return (a > b)? a : b;
}  
public static void main(String args[])
{
Lcss ab=new Lcss();
Scanner st=new Scanner(System.in);
Scanner ss=new Scanner(System.in);
int ll=st.nextInt();
String s1="";
for(int o=1;o<=ll;o++)
{

s1=s1+o;
}
String s2=ss.nextLine();
char c1[]=s1.toCharArray();
char c2[]=s1.toCharArray();
int x=s1.length();
int y=s2.length();
int i,j;
int a[][]=new int[x+1][y+1];
for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
			{
				if(i==0||j==0)
				a[i][j]=0;
				
			   else if(c1[i-1]==c2[j-1])
			   a[i][j]=a[i-1][j-1]+1;
			   else
			   a[i][j]=ab.max(a[i-1][j],a[i][j-1]);
			}
}
System.out.println(a[x-1][y-1]);
}
}
			   

