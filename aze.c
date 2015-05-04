#include<stdio.h>
#include<stdbool.h>
int i,j,m,n;
int maze[10][10];
int sol[10][10]={0};
bool solveMazeUtil(int maze[10][10], int x, int y, int sol[10][10]);
 
/* A utility function to print solution matrix sol[N][N] */
void printSolution(int sol[10][10])
{int i,j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}
 
/* A utility function to check if x,y is valid index for N*N maze */
bool isSafe(int maze[10][10], int x, int y,int m,int n)
{
    // if (x,y outside maze) return false
    if(x >= 0 && x < m && y >= 0 && y < n && maze[x][y] == 1)
        return true;
 
    return false;
}
 
/* This function solves the Maze problem using Backtracking.  It mainly uses
solveMazeUtil() to solve the problem. It returns false if no path is possible,
otherwise return true and prints the path in the form of 1s. Please note that
there may be more than one solutions, this function prints one of the feasible
solutions.*/
bool solveMaze(int maze[10][10],m,n)
{

 
    if(solveMazeUtil(maze, 0, 0, sol,m,n) == false)
    {
        printf("Solution doesn't exist");
        return false;
    }
 
    printSolution(sol);
    return true;
}
 
/* A recursive utility function to solve Maze problem */
bool solveMazeUtil(int maze[10][10], int x, int y, int sol[m][n],int m,int n)
{
    // if (x,y is goal) return true
    if(x == m-1 && y == n-1)
    {
        sol[x][y] = 1;
        return true;
    }
 
    // Check if maze[x][y] is valid
    if(isSafe(maze, x, y,m,n) == true)
    {
        // mark x,y as part of solution path
        sol[x][y] = 1;
 
        /* Move forward in x direction */
        if (solveMazeUtil(maze, x+1, y, sol,m,n) == true)
            return true;
 
        /* If x moving in x direction doesn't give solution then
           Move down in y direction  */
        if (solveMazeUtil(maze, x, y+1, sol,m,n) == true)
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
{   int m,n;
    scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&maze[i][j]);
	}
	}
 
    solveMaze(maze,m,n);
    return 0;
}