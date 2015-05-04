import java.io.*;
class Main{

int func(int i,int j,int arr[],int res[][],int t)
{
    if(res[i][j]!=-1)
        return res[i][j];
     
    int m;
    m = j-i+1;
    m = t - m+1;
    if(i==j)
        return m*arr[i];
         
    res[i][j]= Math.max(m*arr[i]+func(i+1,j,arr,res,t),m*arr[j]+func(i,j-1,arr,res,t));
    return res[i][j];
}
public static void main(String args[])throws IOException{
Main ob=new Main();
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
int arr[]=new int[t];
int res[][]=new int[2000][2000];
		for(int i=0;i<t;i++)
		{
				arr[i]=Integer.parseInt(in.readLine());
		}
	for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
            res[i][j]=-1;
	int ans = ob.func(0,t-1,arr,res,t);
	System.out.println(ans);
   
}
}