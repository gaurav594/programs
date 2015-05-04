#include<cstdio>
using namespace std;
int factorial(int n); 
#define MAX 100000
 
int multiply(int x, int res[], int res_size);
int factorial(int n)
{   int k=0;
    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    
    for (int i=res_size-1; i>=0; i--)
        k=k*10+res[i];
	
	return k;
}
 
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  
 

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10; 
        carry  = prod/10;   
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
 

int main()
{
int t,n,x,p,k;
scanf("%d",&t);
while(t--)
{
	k=0,p=0;
scanf("%d%d",&n,&x);
k=factorial(n)%1000006;
p=k*x;
printf("%d\n",p);
}
return 0;
}