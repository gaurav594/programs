#include<stdio.h>
#define MAX(a,b)((a) > (b) ? (a) : (b))
#define LARGEST(a,b,c,d) (MAX((a), MAX((b), MAX((c) , (d)))))
int main()
{

printf("Largest 4,10,17,29 is %d",LARGEST(4,10,17,29));
return 0;
}