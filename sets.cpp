// SETS SELECTION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool M[100001];
int main(){
 int n;
 cin>>n;
 vector<int> arr;
 arr.resize(n);
 for(int i=0;i<n;i++) cin>>arr[i];
 memset(M,0,sizeof(M));
 M[0]=true;
 for(int i=0;i<n;i++){
   for(int j=100000-arr[i];j>=0;j--){
     if(M[j]){
       M[j+arr[i]]=true;
     }
   }
 }
 int t;
 cin>>t;
 while(t--){
   int x;
   cin>>x;
   M[x]?cout<<"Yes"<<endl:cout<<"No"<<endl;
 }
 return 0;
}