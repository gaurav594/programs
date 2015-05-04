#include<stdio.h>
#include<math.h>
#define LIMIT 31627
int main()
{
 int i,j;
	  int primes[LIMIT],numbers[LIMIT];
	int a,pa;
	long long int h=0;
    for (i=0;i<LIMIT;i++){
        numbers[i]=i+2;
    }

    for (i=0;i<LIMIT;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])
                numbers[j]=-1;
        }
    }


    j = 0;
    for (i=0;i<LIMIT&&j<LIMIT;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];

int n,k,power=0,o,t,sum=1,p;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
 int k=n;
 int arrr[10000]={0};
 int j=0;
  for(i=0;primes[i]<=n;i++)
  {n=k;
  p=n;
  o=primes[i];
  
  int s=0;
arrr[j]=n;

 while(k%o==0)
 {
n=k/o;
arrr[j++]=n;
arrr[j++]=o;
o=o*primes[i];

power++;
}

  }
for(i=0;i<j;i++)
{
for(g=1;g<j;g++)
{
if(arrr[g]==arrr[i]
}
}
printf("%d\n",NewLength);

}
return 0;
}