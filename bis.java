    import java.io.*;
    import java.math.*;
     class Main {

  
       public static void main(String[] args) throws IOException 
       {try {
   BufferedReader nw = new BufferedReader(new InputStreamReader(System.in));
          String s=nw.readLine();
          while(!s.equals(""))
          {
             if(s.equals("1"))
             {
                System.out.println("1");
                s=nw.readLine();
                continue;
             }
             BigInteger q=new BigInteger(s);
             System.out.println(q.multiply(new BigInteger("2")).subtract(new BigInteger("2")));
             s=nw.readLine();
          }
} catch(NullPointerException e) {
    // do something other
}
	    
          }
     

       }




