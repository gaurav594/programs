import java.util.*;

class LCS 
{
    static Scanner console = new Scanner(System.in);
    
    public static void main(String[] args) 
    {   
	 
        int i,j,ll;
        String X="";  
        String Y;
		ll=console.nextInt();
        for(i=1;i<=ll;i++)
		{
        X = X+i;
		}
        Y = console.next();
        System.out.println();
        
        int m= X.length();
        int n = Y.length();
        int[][] T = new int[m+1][n+1];
     
        for (i = 0; i <= m; i++) 
        {
            T[i][0] = 0;
        }
	
        for (j = 0; j <= n; j++) 
        {
            T[0][j] = 0;
        }
        
        for (i = 1; i <= m; i++) 
        {
            for (j = 1; j <= n; j++) 
            {
                if (X.charAt(i-1) == Y.charAt(j-1)) 
                    T[i][j]=T[i-1][j-1]+1;
                    else 
                    {	
                    	    T[i][j]=java.lang.Math.max(T[i][j-1],T[i-1][j]);
                    	    
                    }
                }
        }
     	  
    
        String lcs = new String();
        i=m;
        j=n;
        while (i!=0 && j!=0) 
        {
            if (T[i][j] ==1) 
            {   
            	lcs =X.charAt(i-1) + lcs;
                i = i - 1;
                j = j - 1;
            }
            if (T[i][j] == 2) 
            {
                i = i - 1;
            }
            if (T[i][j] == 3) 
            { 
                j = j - 1;
            }
        }
        System.out.println("String X is " + X);
        System.out.println("String Y is " + Y);
        System.out.println("The length of LCS is " + T[n][m]);
        System.out.println("The LCS is " + lcs);
        System.out.println(T[i][j]);
         
    }
         
}