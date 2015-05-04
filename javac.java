import java.io.*;
class Javac
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
		String s;
		while(true)
		{   s=b.readLine();
			int l=s.length();
			 int i,j,flag,fl;
			j=0;
			fl=0;
		    char str[]=s.toCharArray();
			char res[]=new char[201];
			if(s.contains("_"))
			{     flag=0;
		         
				for(i=0;i<l;i++)
				{
					if(str[i]>'A' && str[i]<'Z')
					{
						flag=1;
					}
				}
				if(flag==1||str[0]=='_'||str[l-1]=='_')
				{
					System.out.println("Error!");
					fl=1;
				}
				else
				  for(i=0;i<l;)
				  {
					  if(str[i]=='_')
					  {
						  res[j++]=Character.toUpperCase(str[i+1]);
						  i=i+2;
					  }
					  else
					  {
						  res[j++]=str[i];
						  i++;
					  }
				  }
				  res[j]='\0';
			}
			else
			{
			    if(str[0]>='A' && str[0]<='Z')
				{
					System.out.println("Error!");
					fl=1;
				}
				else
				{   j=0;
					for(i=0;i<l;)
					{
						if(str[i]>='A' && str[i]<='Z')
						{
							res[j++]='_';
							res[j++]=Character.toLowerCase(str[i]);
							i=i+1;
						}
						else
						{
						res[j++]=str[i];
                         i=i+1;						
						}
					}
					res[j]='\0';
					
				}
			}
			if(fl==0)
			{
			for(i=0;res[i]!='\0';i++)
			{
				System.out.print(res[i]);
			}
			System.out.println();
			}
			fl=0;
		}
	}
}