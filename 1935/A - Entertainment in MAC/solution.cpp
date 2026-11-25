#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(s<=rev){
        cout<<s<<endl;
    }
    else{
        cout<<rev+s<<endl;
    }
}
 int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
         solve();
     }
 }