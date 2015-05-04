#include <stdio.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[10][10],arrr[10][10];
    int c[10][10]={0};
        int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arrr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+arr[i][k]*arrr[k][i];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",c[i][j]);
        }
    }
    return 0;
}