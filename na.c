#include <stdio.h>
#include <string.h>
int main(void) {
 int n,m,s,i;
 int count=0;
 char t[200],p[200];
 printf("Enter the data for Naive Pattern Match Algorithm\n");
 printf("String: ");
 scanf("%s",t);
 printf("Pattern: ");
 scanf("%s",p);
 n=strlen(t);
 m=strlen(p);
 printf("Pattern Matched at:");
 for(s=0;s<n-m;s++)
 {
  for(i=0;i<m;i++)
  {
   if(t[s+i]==p[i]) count++;
  }
  if(count==m)
  printf("%d\t",s);
  count=0;
 }
	return 0;
}
