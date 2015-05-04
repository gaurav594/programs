#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
int main(){
int i,j;
char temp[3] = {0};
char **strs = NULL;
int n = 0;
scanf("%d", &n);
strs = malloc(sizeof(char*) * n);
for (i = 0; i < n; i++)
{
    scanf(" %[^\n]", temp);
    strs[i] = strdup(temp);
}
sort(strs[][2], strs[][2]+m)
int k=(int)strs[0][2]-(int)'0';
printf("%d",k);
return 0;
}