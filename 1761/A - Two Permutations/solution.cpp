#include<iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int a,b;
         cin>>a>>b;
         
         if(n==a && n==b){
             cout<<"yes
";
         }
         else if( n-a-b>=2){
             cout<<"yes
";
         }else{
             cout<<"No
";
         }
     }
 }