import java.util.*;
class Dup
{
public static void main(String args[])
{
int i;
Scanner st=new Scanner(System.in);
int a=st.nextInt();
int arr[]=new int[a];
int chr[]=new int[a];

for(i=0;i<a;i++)
{
arr[i]=st.nextInt();

}
for(i=0;i<a;i++)
{
chr[arr[i]]++;
}
int k=0;
for(i=0;i<a;i++)
{
if(chr[i]!=0)
{
arr[k]=i;
k++;
}
}
for(i=0;i<k;i++)
{
System.out.println(arr[i]);
}
}
}