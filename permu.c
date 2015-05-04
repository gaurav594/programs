# include <stdio.h>  
# include <string.h> 
void perm(char a[20], int k, int n)  
{  
  char t, d[20] ;  
  int i ;  
  if(k == n)  
  {  
    printf("\n%s", a) ;  
    return ;  
  }  
  else  
  {  
    for(i = k ; i < n ; i++)  
    {  
      t = a[i] ;  
      a[i] = a[k] ;  
      a[k] = t ;  
      strcpy(d, a) ;  
      perm(d, k + 1, n) ;  
    }  
  }  
}  
void main()  
{  
  int n, i, k = 0 ;  
  char a[20] ;  
  void perm(char a[20], int k, int n) ;  
  printf("Enter the string : ") ;  
  scanf("%s", a) ;  
  printf("\nThe permutation is :\n") ;  
  n = strlen(a) ;  
  perm(a, k, n) ;  
  getch() ;  
}  
