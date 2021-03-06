#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<fstream>
#include<cstdlib>
#include<cassert>
#include<vector>
#include<algorithm>
#include<stack>
#include<set>
#include<map>
#include<list>
#include<math.h>
#include<ctime>
#define LL long long
#define ULL unsigned long long
#define F first
#define S second
#define pb push_back
#define FOR(i,lb,ub) for(i=lb;i<=ub;i++)
#define RFOR(i,ub,lb) for(i=ub;i>=lb;i--)
#define FORS(it,v) for(it=v.begin();it!=v.end();it++)
#define st_clk double st=clock();
#define end_clk double en=clock();
#define show_time cout<<"\tTIME="<<(en-st)/CLOCKS_PER_SEC<<endl;
#define sc(n) scanf("%d",&n)
#define scst(n) scanf("%s",n)
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
LL gcd(LL a, LL b) { return b?gcd(b,a%b):a; }
using namespace std;
vector<int> getRelevantIndices(string x){
      vector<int> temp;
      for(int i=0;x[i]!=0;i++){
           if(x[i] != '#'){
                temp.push_back(i);
           }
      }
      return temp;
}
void solve(string initial,string final){
     // Get all relevant positions
   // cout << "got into func " << endl;
    vector<int> ini_p = getRelevantIndices(initial), fin_p = getRelevantIndices(final);
    if(ini_p.size() != fin_p.size()){
         printf("No\n"); return;
    }
    int len = ini_p.size();
  //  cout << "started checkign : " << endl;
    for(int i=0;i<len;i++){
       // Pieces are not in same order
       if(initial[ini_p[i]] != final[fin_p[i]]){
            printf("No\n"); return;
       }
       //B moves to left
       if(initial[ini_p[i]] == 'B' && (ini_p[i] > fin_p[i]) ){
            printf("No\n"); return;
       }
       // A moves to right.
       if(final[ini_p[i]] == 'A' && (ini_p[i] < fin_p[i]) ){
            printf("No\n"); return;
       }
    }
    printf("Yes\n");
    return;
}
int main()
{
     
     int t;
     scanf("%d",&t);
     while(t--){
        string x,y;
        cin >> x >> y;
        solve(x,y);
      }
     return 0;
}