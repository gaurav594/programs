import java.util.*;
import java.io.*;
class Main{
    private static Map<Integer, Character> vec= new HashMap<Integer, Character>();
   public static void main(String[] args)throws IOException {
      BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
	  PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
	  int t=Integer.parseInt(in.readLine());
	  int o=1;
	 long ans=1;
	 int p=0,k=0,i=0;
	 char A='@';
	  while(t-->0)
	  {
	  p=0;k=0;i=0;o=1;
	  ans=1;
     A=0;
	  String s=in.readLine();
	  StringTokenizer st=new StringTokenizer(s);
	  int n=Integer.parseInt(st.nextToken());
	  int m=Integer.parseInt(st.nextToken());
      int arr[]=new int[m];
      for(i=0;i<m;i++)
	  {
	  String s1=in.readLine();
	  StringTokenizer stt=new StringTokenizer(s1);
	  char x=stt.nextToken().charAt(0);
	  int y=Integer.parseInt(stt.nextToken());
	  vec.put(y,x);
	  arr[i]=y;
      }
	Arrays.sort(arr);
	if(vec.containsKey(arr[0]))
	{
	A=(char)vec.get(arr[0]);
	}
	o=arr[0];
	for(i=1;i<m;i++)
	{
	if(vec.containsKey(arr[i]))
	{

	if(A!=(char)vec.get(arr[i]))
		{
		p=arr[i];
		ans=(ans*(p-o))%1000000009;
		o=p;
		}
		else
		{
		p=arr[i];
		o=p;
		}
		A=(char)vec.get(arr[i]);
	}
	
	}

 out.println(ans);
 vec.clear();
      }
	  out.flush();
   }  
}