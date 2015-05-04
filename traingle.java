import java.util.*;
import java.math.*;
class Mac{

  public static void main(String a[]){
  Scanner st=new Scanner(System.in);
  int s,s1,s2,ans,i,j;
  int arr[]=new int[1001];
  int t=st.nextInt();
  for(j=0;j<t;j++)
  {
  s=0;
  s1=0;
  s2=0;
  ans=0;
  int n=st.nextInt();
  int k=st.nextInt();
  for(i = 0; i < n; i++)
  {
  arr[i]=st.nextInt();
  
  }
 for(i = 0; i <n; i++)
  s=s+arr[i];
 if(s%n!=0)
 {
 quick_srt(arr,0,n-1);
 }
 t=k;
 if(n-k>k)
 t=n-k; 
 
  for(i = 0; i <t; i++)
  s1=s1+arr[i];
  for(i = t; i <n; i++)
  s2=s2+arr[i];
  
  ans=max(Math.abs(s1-(s-s1)),Math.abs(s2-(s-s2)));
  System.out.println(ans);
  }
  }
  public static int max(int a,int b){
 if(a>b)
 {
 return a;
 }
 else
 {
 return b;
 }
  } 
  public static void quick_srt(int arr[],int lo, int n){
  int low = lo;
  int high = n;
  if (low >= high) {
  return;
  }

  int middle = (low + high) / 2;
  quick_srt(arr, low, middle);
  quick_srt(arr, middle + 1, high);
  int end_low = middle;
  int start_high = middle + 1;
  while ((lo <= end_low) && (start_high <= high)) {
  if (arr[low] < arr[start_high]) {
  low++;
  } else {
  int Temp = arr[start_high];
  for (int k = start_high- 1; k >= low; k--) {
  arr[k+1] = arr[k];
  }
  arr[low] = Temp;
  low++;
  end_low++;
  start_high++;
  }
  }
  }
}