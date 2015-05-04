import java.util.*;
import java.io.*;
class Main{

    private static Map<Long,Long > vec= new HashMap<Long,Long>();
	private static Map<Long,Long> ve= new HashMap<Long,Long>();
	private static Map<String,Long> ve1= new HashMap<String,Long>();
   public static void main(String[] args)throws IOException {
   
      BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
	  PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
	  long t=Integer.parseInt(in.readLine());
	  long i=0,j=0,k=0;
	  String ss="";
	  String ss1="";
	  String ss2="";
	  for(i=1;i<=t;i++)
	  {
	  String s=in.readLine();
	  StringTokenizer st=new StringTokenizer(s);
	  long n=Integer.parseInt(st.nextToken());
	  long m=Integer.parseInt(st.nextToken());
	  vec.put(i,n);
	  ve.put(i,m);
	  ss=n+" "+m;
	  ve1.put(ss,i);
      }
	
	 long s=3,c=0,x1,y1,x2,y2,xt,yt,xx3,yy3,xx4,yy4,x13,y13,x14,y14;
      float x3,y3,x4,y4,xc,yc,xd,yd;
	   for(i=1;i<t;i++)
	  {
	  x1=(long)vec.get(i);
	  y1=(long)ve.get(i);
	 c=0;
	  for(j=i+1;j<=t;j++)
	  {
	  x2=(long)vec.get(j);
	  y2=(long)ve.get(j);
	  if(Math.abs(x2-x1)==Math.abs(y2-y1))
	  { 
	  c=0;
	  float x11=(float)x1;
	  float x12=(float)x2;
	  float y11=(float)y1;
	  float y12=(float)y2;
			xc = (x11 + x12)/2 ;  yc = (y11 + y12)/2  ;    
			xd = (x11 - x12)/2  ;  yd = (y11 - y12)/2  ;   

			x3 = xc - yd  ;  y3 = yc + xd;			
			x4 = xc + yd  ;  y4 = yc - xd;
			long f1=(long)x3;
			long f2=(long)y3;
			long ff1=(long)x4;
			long ff2=(long)y4;
            
			
			 
			if(ve1.containsKey(ss1))
			{
			c=c+1;
			}
		
			if(ve1.containsKey(ss2))
			{
			c=c+1;
			
			}
			
			c=2-c;
			if(c<s)
			{
			s=c;
			}
			c=0;
		  
		 
	    	
			}
	  else 
	  {c=0;
	  xt=Math.abs(x2-x1); yt=Math.abs(y2-y1);
	 x13 = x1+yt ;  y13 = y1-xt;
      xx3 = x1-yt;  yy3 = y1+xt;	  
	  x14 = x2+ yt ;  y14 = y2- xt; 
	  xx4 = x2-yt;  yy4 = y2+ xt; 
	     
		 
	      ss1=x13+" "+y13;
            ss2=x14+" "+y14;
       
			if(ve1.containsKey(ss1))
			{
			c=c+1;
			}
		
			if(ve1.containsKey(ss2))
			{
			c=c+1;
			
			}
			
			c=2-c;
			if(c<s)
			{
			s=c;
			}
			c=0;
		 
		  if(s>1)
			{
			 ss1=xx3+" "+yy3;
            ss2=xx4+" "+yy4;	
		
			if(ve1.containsKey(ss1))
			{
			c=c+1;
			}
		
			 if(ve1.containsKey(ss2))
			{
			c=c+1;
			
			}
			
			c=2-c;
			if(c<s)
			{
			s=c;
			}
			c=0;
			
			}
	
			
	  }
	  
	  }
	  
	  }

	  out.println(s);
	  
	  
	  out.flush();
   }  
}