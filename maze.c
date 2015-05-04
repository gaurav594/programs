#include<stdio.h>
#include <stdbool.h>
int maze[10][10];
int sol[10][10];
int m,n,i,j;
bool solveMazeUtil(int maze[m][n], int x, int y, int sol[m][n]);
/* A utility function to print solution matrix sol[N][N] */
void printSolution(int sol[m][n])
{   int i,j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}
/* A utility function to check if x,y is valid index for N*N maze */
bool isSafe(int maze[m][n], int x, int y)
{
    // if (x,y outside maze) return false
    if(x >= 0 && x < m && y >= 0 && y < n && maze[x][y] == 1)
        return true;
 
    return false;
}
bool solveMaze(int maze[m][n])
{ 

 
    if(solveMazeUtil(maze, 0, 0, sol) == false)
    {
        printf("Solution doesn't exist");
        return false;
    }
 
    printSolution(sol);
    return true;
}
 
/* A recursive utility function to solve Maze problem */
bool solveMazeUtil(int maze[m][n], int x, int y, int sol[m][n])
{
    // if (x,y is goal) return true
    if(x == m-1 && y == n-1)
    {
        sol[x][y] = 1;
        return true;
    }
 
    // Check if maze[x][y] is valid
    if(isSafe(maze, x, y) == true)
    {
        // mark x,y as part of solution path
        sol[x][y] = 1;
 
        /* Move forward in x direction */
        if (solveMazeUtil(maze, x+1, y, sol) == true)
            return true;
 
        /* If x moving in x direction doesn't give solution then
           Move down in y direction  */
        if (solveMazeUtil(maze, x, y+1, sol) == true)
            return true;
 
        /* If none of the above movements work then BACKTRACK: 
            unmark x,y as part of solution path */
        sol[x][y] = 0;
        return false;
    }   
 
    return false;
}
 
// driver program to test above function
int main()
{ 	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	sol[i][j]=0;
	}
	}  
int i,j;
    scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&maze[i][j]);
	}
	}
	
    solveMaze(maze);
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d",sol[i][j]);
	}
	printf("\n");
	}
    return 0;
}