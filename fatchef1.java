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
     

      for(i=0;i<m;i++)
	  {
	  String s1=in.readLine();
	  StringTokenizer stt=new StringTokenizer(s1);
	  char x=stt.nextToken().charAt(0);
	  int y=Integer.parseInt(stt.nextToken());
	  vec.put(y,x);
      }
	  
	  for(i=1;i<=n;i++)
	{
	if(vec.containsKey(i))
	{
	A=(char)vec.get(i);
	o=i;
	break;
	}
	
	}
	k=o+1;
	for(i=k;i<=n;i++)
	{
	if(vec.containsKey(i))
	{

	if(A!=(char)vec.get(i))
		{
		p=i;
		ans=(ans*(p-o))%1000000009;
		o=p;
		}
		else
		{
		p=i;
		o=p;
		}
		A=(char)vec.get(i);
	}
	
	}

 out.println(ans);
 vec.clear();
      }
	  out.flush();
   }  
}