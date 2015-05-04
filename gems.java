import java.io.*;
class Main{
public static void main(String args[])throws IOException{
BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
int arr[][]=new int[130][26];
int flag=1,i,j,ans=0;
for(i=0;i<t;i++)
	{
		String a=in.readLine();
			for(j=0;j<a.length();j++)
					{
						arr[i][a.charAt(j)-'a']++;
					}
	}

for(i=0;i<26;i++)
	{
	flag=1;
	for(j=0;j<t;j++)
		{
		if(arr[j][i]==0)
		{
			flag=0;
		}
		}
		if(flag==1)
		{
			ans++;
		}
	}
System.out.println(ans);
}
}