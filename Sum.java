class Sum
 {
  public static void main(String args[])
  {
   int i,s=0,f=1;
   float m=0;
   for(i=1;i<=7;i++)
    {
     s=s+i;
     f=f*i;
     if(i%2==0)
      m=m-s/f;
     else
      m=m+s/f;
    }
   System.out.println(m);
  }
}