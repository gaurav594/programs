#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
int main()
{
    //f_in("samplein.txt");
    //f_out("sampleout.txt");
    int i, start, end, T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;
        bool flag=1;
        for(i=0; i<S.size(); i++)
        {
            if(S[i]!='1' && S[i]!='0' && S[i]!='8')
            {
                flag=0;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else
        {
            flag=1, start=0 , end=S.size()-1;
            while(start<end)
            {
                if(S[start]!=S[end])
                {
                    flag=0;
                    break;
                }
                start++, end--;
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}