 public class ssub{


public static void main(String[] args) {
    String s1= new String("anurag");
    String s2=new String("gau");

    char a[]=s1.toCharArray();
    char b[]=s2.toCharArray();
    int i=0;
    int j=0;

    while(i<a.length && j<b.length)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j=0;
        }
        if(j == b.length)
        {
            System.out.println("we have found the substring");
        }
    }
}
 }