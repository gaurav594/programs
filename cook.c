#include <stdio.h>
#include <math.h>
#include<stdbool.h>
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}

bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) ||isPerfectSquare(5*n*n - 4);
}

int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{ scanf("%d",&n);
     isFibonacci(n)? printf("YES\n"):printf("NO\n");
} 
 return 0;
}