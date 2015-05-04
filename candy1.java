import java.io.*;
import java.util.Arrays;
class candy
{
public static void main(String args[]) throws IOException
{
	BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
	
	while(true)
	{
	int t=Integer.parseInt(b.readLine());
	 if(t==-1)
	 {
		 break;
	 }
	int arr[]=new int[t];
	int sum=0;
	int temp=0;
	int i,k;
     for(i=0;i<t;i++)
	 {
		 arr[i]=Integer.parseInt(b.readLine());
		 sum=sum+arr[i];
	 }
	 if(sum%t!=0)
	 {
		 System.out.println(-1);
		 continue;
	 }
	 k=sum/t;
	 Arrays.sort(arr);
     for(i=0;i<t;i++)
	 {
		 while(arr[i]>k)
		 {  arr[i]--;
			 temp++;
		 }
	 }
	 System.out.println(temp);
	
	}
}
}