#include <iostream>
#include <math.h>
using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}

bool isFibonacci(int n)
{

    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
 
int main()
{   int t,n;
  cin>>t;
  while(t--)
  {   cin>>n;
     isFibonacci(n)? cout << "YES\n":
                     cout << "NO\n" ;
					 }
  return 0;
}