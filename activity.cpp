#include <cstdio>
#include <algorithm>
using namespace std;
 
pair< int, int > a[100000];
 
//a[].first denotes the finish time
//a[].second denotes the starting time
 
int main() 
{
int i, n, last;
 
//n denotes the number of activities
 
scanf("%d", &n);
 
for(i = 0; i < n; i++) 
{
scanf("%d %d",&a[i].second,&a[i].first);
}
//using sort function for an array of pairs sorts
// it according to the first one.
//sorting according to finish time
sort(a, a + n);
 
last = -1;//initialization
for(i = 0; i < n; i++)
{
if(a[i].second>= last) //step 3
{
//printing the activity number which is selected
printf("%d ",i);
last = a[i].first;
}
}
 
return 0;
}