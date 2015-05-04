#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    bool mark[1000009]={false};
    int x,y;
    cin>>x>>y;
    int lim1=2;
    int lim2=sqrt(y);
    int res=0;
    for(int j=lim1;j<=lim2;j++)
    {
    int temp=j*j;
 	int g=(x/temp);
 	if(x%temp!=0)
 	g++;
    for(int k=g;k<=y/temp;k++)
    mark[temp*k-x+1]=true;
    }
    for(int i=1;i<=y-x+1;i++)
    if(!mark[i])
    res++;
    //cout<<mark[4]<<" "<<mark[8]<<" "<<mark[12]<<"\n";
    cout<<res<<"\n";
    }
    return 0;
}
