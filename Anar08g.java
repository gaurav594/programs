import java.io.*;
import java.util.*;
class Anar
{
public static void main(String args[])throws IOException
{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int arr[][]=new int[1000][1000];
int r[]=new int[1000];
int c[]=new int[1000];
int i,j,diff,n,k=0,sum=0;
int t=Integer.parseInt(in.readLine());
while(true)
{

for(i=0;i<t;i++)
{   
    String s=in.readLine();
	StringTokenizer sr=new StringTokenizer(s);
	 n=sr.countTokens();
	for(j=0;j<n;j++)
		{
		arr[i][j]=Integer.parseInt(sr.nextToken());
		sum+=arr[i][j];
		
		}
}
for(i = 0; i < t; i++) {
  for(r[i] = c[i] = j = 0; j < t; j++) {
				r[i] += arr[i][j];
				c[i] += arr[j][i];
			}
		}
for(diff=i=0;i<t;i++)
{
	if(r[i]>c[i])
	  diff+=r[i]-c[i];
}

System.out.print((k+1)+"."+" ");
System.out.print(sum+" ");
System.out.print(diff);
System.out.println();
sum=0;
 t=Integer.parseInt(in.readLine());
if(t==0)
break;
}
}
}