import java.util.*;
import java.io.*;
class Main{
    private static Map<Integer, Character> vec= new HashMap<Integer, Character>();
   public static void main(String[] args)throws IOException {
      BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
	  PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
	  int t=Integer.parseInt(in.readLine());
	  
	  while(t-->0)
	  {
	  int p=0,k=0,i=0;
	  long sum=1;
	  String s=in.readLine();
	  StringTokenizer st=new StringTokenizer(s);
	  int n=Integer.parseInt(st.nextToken());
	  int m=Integer.parseInt(st.nextToken());
    

      for(i=0;i<m;i++)
	  {
	  String s1=in.readLine();
	  StringTokenizer stt=new StringTokenizer(s1);
	  char x=Character.toUpperCase(stt.nextToken().charAt(0));
	  int y=Integer.parseInt(stt.nextToken());
	  vec.put(y,x);
      }
	 int arr[]=new int[n+1];
	 arr[0]=0;
	 int l=1;
	for(i=1;i<=n;i++)
	{
	if(vec.containsKey(i)&&!vec.containsKey(i+1))
	{   if(vec.get(i)!=vec.get(arr[l-1]))
	{
	    
		arr[l]=i;
		l++;
		}
	}
	}
if(l==2)
  {
   out.println(1);
  }
  else
  {
  for(i=l-1;i>=2;i--)
	{
	sum=(sum*(arr[i]-arr[i-1]))%1000000009;
	}
  out.println(sum);
  }
   /*for(i=l-1;i>=2;i--)
	{
	out.println(arr[i]);
	}*/
      }
	  out.flush();
   }  
}