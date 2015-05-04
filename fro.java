import java.util.*;
class fro
{
    public static void main(String[] args)
    { int i,j;
      
		  Scanner st=new Scanner(System.in);
	    int t=st.nextInt();
		while(true)
		{
		
		String s=st.nextLine();
		int l=s.length();
		int k=l/t;
		char arr[][]=new char[k][t];
		int o=0;
		for(i=0;i<k;i++)
		{
		if(i%2!=0||i==1)
		{
		for(j=0;j<t;j++)
		{
		arr[i][j]=s.charAt(o);
		o++;
		}
		}
		else
		{
		for(j=t-1;j>=0;j--)
		{
		arr[i][j]=s.charAt(o);
		o++;
		}
		}
		}
		for(i=0;i<t;i++)
		{
		for(j=0;j<k;j++)
		{
		System.out.print(arr[j][i]);
		}
		}
		if(t==0)
		break;
		}
    }
}