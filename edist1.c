// Dynamic Programming implementation of edit distance
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
// Change these strings to test the program
#define STRING_X "SUNDAY"
#define STRING_Y "SATURDAY"
 
#define SENTINEL (-1)
#define EDIT_COST (1)
 
inline
int min(int a, int b) {
   return a < b ? a : b;
}
 
// Returns Minimum among a, b, c
int Minimum(int a, int b, int c)
{
    return min(min(a, b), c);
}
 
// Strings of size m and n are passed.
// Construct the Table for X[0...m, m+1], Y[0...n, n+1]
int EditDistanceDP(char X[], char Y[])
{    int i,j;
    // Cost of alignment
    int cost = 0;
    int leftCell, topCell, cornerCell;
 
    int m = strlen(X)+1;
    int n = strlen(Y)+1;
 
    // T[m][n]
    int *T = (int *)malloc(m * n * sizeof(int));
 
    // Initialize table
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            *(T + i * n + j) = SENTINEL;
 
    // Set up base cases
    // T[i][0] = i
    for(i = 0; i < m; i++)
        *(T + i * n) = i;
 
    // T[0][j] = j
    for(j = 0; j < n; j++)
        *(T + j) = j;
 
    // Build the T in top-down fashion
    for(i = 1; i < m; i++)
    {
        for(j = 1; j < n; j++)
        {
            // T[i][j-1]
            leftCell = *(T + i*n + j-1);
            leftCell += EDIT_COST; // deletion
 
            // T[i-1][j]
            topCell = *(T + (i-1)*n + j);
            topCell += EDIT_COST; // insertion
 
            // Top-left (corner) cell
            // T[i-1][j-1]
            cornerCell = *(T + (i-1)*n + (j-1) );
 
            // edit[(i-1), (j-1)] = 0 if X[i] == Y[j], 1 otherwise
            cornerCell += (X[i-1] != Y[j-1]); // may be replace
 
            // Minimum cost of current cell
            // Fill in the next cell T[i][j]
            *(T + (i)*n + (j)) = Minimum(leftCell, topCell, cornerCell);
        }
    }
 
    // Cost is in the cell T[m][n]
    cost = *(T + m*n - 1);
    free(T);
    return cost;
}
 

int main()
{
int t;
char X[100001],Y[100001];
scanf("%d",&t);
	while(t--)
	{
    scanf("%s",X);
	scanf("%s",Y);
	scanf("%d %d %d",&a,&b,&k);
 
    printf("Minimum edits required to convert %s into %s is %d\n",
           X, Y, EditDistanceDP(X, Y) );
     }
    return 0;
}