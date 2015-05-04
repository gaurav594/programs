#include<stdio.h>
check(int n) {
    int fib1 = 0;
    int fib2 = 1;
    do {
        int saveFib1 = fib1;
        fib1 = fib2;
        fib2 = saveFib1 + fib2;
        }
    while (fib2 < n);

    if (fib2 == n)
        return 1;
    else
        return 0;

}
int main() {
int t,n,k;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    k=check(n);
	if(k==1)
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
}