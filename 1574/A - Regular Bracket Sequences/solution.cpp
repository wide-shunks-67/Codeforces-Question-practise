#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
 int main(){
      ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
        int n;
         cin>>n;
         for(int i=1;i<=n;i++){
             string s="";
             s+=string(i,'(');
             s+=string(i,')');
             for(int j=i+1;j<=n;j++){
                 s+="()";
             }
             cout<<s<<endl;
         }
     }
 }