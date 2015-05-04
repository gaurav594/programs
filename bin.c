class Gen
{ 
public static void main(String args[])
{
 int n, c, k;
 String arr[]=new String[600000];
 for(i=1;i<=600000;i++)
 {
  for (c = 31; c >= 0; c--)
  {
    k = i >> c;
    o=k&1; 
    if (o!=0)
      ss=s+1;
    else
      ss=s+0;
  }
arr[i]=ss;
ss="";
}
}