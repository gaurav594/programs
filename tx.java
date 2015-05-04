import java.io.File;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.math.BigInteger;
 class W{

    public static void main(String[] args) {
 

 
          File f = new File("omg.txt");
          if(!f.exists())
          {
            try {
                       f.createNewFile();
                } catch (Exception e) {
                    e.printStackTrace();
                }
          }

        try {
                FileOutputStream fos = new FileOutputStream(f);
                PrintStream ps = new PrintStream(fos);
                System.setOut(ps);
        } catch (Exception e) {
            e.printStackTrace();
        }
     int i, c, k,o;
 BigInteger arr[]=new BigInteger[600001];
 String ss="";
 for(i=1;i<=600000;i++)
 {
  for (c = 31; c >= 0; c--)
  {
    k = i >> c;
    o=k&1; 
    if (o!=0)
      ss=ss+1;
    else
      ss=ss+0;
  }
ss=ss.replaceFirst("^0+(?!$)", "");
BigInteger v = new BigInteger("0");
BigInteger a = new BigInteger("2");
BigInteger b =new BigInteger(ss);
BigInteger m = new BigInteger("1000000007");
BigInteger l=a.modPow(b, m);
arr[i]=l;
ss="";
}
for(i=1;i<=600000;i++)
{
System.out.print('"');
System.out.print(arr[i]);
System.out.print('"'+",");
}

    }

}