class Abc
{
public static void main(String args[])
{
int i;
int c=0;
int k=0;
char arr[5]={'1','0','0','0','0'};
for(i=4;i>0;i--)
{
c++;
if(c%3==0)
{
k++
if(k>1)
{
arr[i]=',';
}
else
{
arr[i+1]=arr[i];
}
}
n=n+(strlen(arr)/2)-1;
for(i=0;i<n;i++)
{
printf("%c",arr[i]);
}
}
}