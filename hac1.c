#include<stdio.h>
  void quick_srt2(int arr[],int, int );
void quick_srt1(int arr[],int lo, int n){
int k;
  int low = lo;
  int high = n;
  if (low >= high) {
  return;
  }

  int middle = (low + high) / 2;
  quick_srt1(arr, low, middle);
  quick_srt1(arr, middle + 1, high);
  int end_low = middle;
  int start_high = middle + 1;
  while ((lo <= end_low) && (start_high <= high)) {
  if (arr[low] < arr[start_high]) {
  low++;
  } else {
  int Temp = arr[start_high];
  for (k = start_high- 1; k >= low; k--) {
  arr[k+1] = arr[k];
  }
  arr[low] = Temp;
  low++;
  end_low++;
  start_high++;
  }
  }
  }
  void quick_srt2(int arr[],int lo, int n){
  int k;
  int low = lo;
  int high = n;
  if (low >= high) {
  return;
  }

  int middle = (low + high) / 2;
  quick_srt2(arr, low, middle);
  quick_srt2(arr, middle + 1, high);
  int end_low = middle;
  int start_high = middle + 1;
  while ((lo <= end_low) && (start_high <= high)) {
  if (arr[low] < arr[start_high]) {
  low++;
  } else {
  int Temp = arr[start_high];
  for (k = start_high- 1; k >= low; k--) {
  arr[k+1] = arr[k];
  }
  arr[low] = Temp;
  low++;
  end_low++;
  start_high++;
  }
  }
  }
int main()
{
int t,i;
long long sum=0;
int ar1[100000];
int ar2[100000];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&ar1[i]);
}
for(i=0;i<t;i++)
{
scanf("%d",&ar2[i]);
}
quick_srt1(ar1,0, t-1);
quick_srt2(ar2,0, t-1);
for(i=0;i<t;i++)
{
sum=sum+ar1[i]*ar2[i];
}
printf("%lld",sum);
return 0;
}