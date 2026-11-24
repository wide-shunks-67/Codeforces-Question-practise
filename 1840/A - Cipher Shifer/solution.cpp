#include<iostream>
#include<string>
using namespace std;
 int main(){
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
        int n;
         cin>>n;
         string s;
         cin>>s;
         string a="";
         int i=0;
         while(i<n){
             a+=s[i];
             char c= s[i];
             i++;
             while(i<n && c!=s[i]){
                 i++;
             }
             i++;
         }
         cout<<a<<endl;
     }
 }