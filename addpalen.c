#include <stdio.h>
#include <string.h>
int min(int a, int b)
{   return a < b ? a : b;  }

int findMinInsertionsDP(char str[], int n)
{
    int table[n][n], l, h, gap;
 
   
    memset(table, 0, sizeof(table));
    for (gap = 0; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            table[l][h] = (str[l] == str[h])? table[l+1][h-1] :
                          (min(table[l][h-1], table[l+1][h]) + 1);
 
    return table[0][n-1];
}
 
// Driver program to test above function.
int main()
{
    int t;
	char str[200001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
    printf("%d\n", findMinInsertionsDP(str, strlen(str)));
	}
    return 0;
}