import java.util.StringTokenizer;
class Split
{
public static void main(String args[])
{
String s="ramu_shayamu_ramu";
StringTokenizer tokenizer=new StringTokenizer(s,"_");
int wlen=tokenizer.countTokens();
String ags[]=new string[wlen];
n=0;
while(tokenizer.hasMoreTokens())
{
ags[n]=tokenizer.nextToken();
n=n+1;
}
}
}