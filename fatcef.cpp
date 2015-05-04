#include <map>
#include <iostream>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
int main(int argc, char **argv)
{
  std::map<std::string, int> m;
int t;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&m);
 int arr[m];
      for(i=0;i<m;i++)
	  {
	 scanf("%c %d",&x,&y);
	 m["y"]=x;
	  arr[i]=y;
      }
  m["hello"] = 23;

  if (m.find("world") != m.end())
    std::cout << "map contains key world!\n";
  // retrieve
  std::cout << m["hello"] << '\n';
  std::map<std::string, int>::iterator i = m.find("hello");
  assert(i != m.end());
  std::cout << "Key: " << i->first << " Value: " << i->second << '\n';
  }
  return 0;
}