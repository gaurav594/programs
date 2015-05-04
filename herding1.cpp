#include<bits/stdc++.h>
using namespace std;
inline int scan(){
    char c = getchar_unlocked();
    int x = 0;
    while(c<'0'||c>'9'){
        c=getchar_unlocked();
    }
    while(c>='0'&&c<='9'){
        x=(x<<1)+(x<<3)+c-'0';
        c=getchar_unlocked();
    }
    return x;
}
vector<pair<int,int> > v[1001][1001];
int ans=0;
bool visited[1001][1001]={0};
void dfs(int i,int j){
    if(visited[i][j]){
        return;
    }
    visited[i][j]=1;
    int x=v[i][j].size();
    for(int z=0;z<x;z++){
        dfs(v[i][j][z].first,v[i][j][z].second);
    }
}
int main(){
    int n=scan(),m=scan();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char s=getchar_unlocked();
            while(s<'E'||s>'W'){
                s=getchar_unlocked();
            }
            if(s=='S'){
                v[i][j].push_back(make_pair(i+1,j));
                v[i+1][j].push_back(make_pair(i,j));
                continue;
            }
            if(s=='N'){
                v[i][j].push_back(make_pair(i-1,j));
                v[i-1][j].push_back(make_pair(i,j));
                continue;
            }
            if(s=='E'){
                v[i][j].push_back(make_pair(i,j+1));
                v[i][j+1].push_back(make_pair(i,j));
                continue;
            }
            if(s=='W'){
                v[i][j].push_back(make_pair(i,j-1));
                v[i][j-1].push_back(make_pair(i,j));
                continue;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(!visited[i][j]){
                ans++;
                dfs(i,j);
            }
        }
    }
    printf("%d\n",ans);
}