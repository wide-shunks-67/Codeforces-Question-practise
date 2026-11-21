#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int current_score= abs(a-b);
    a+=c;
    int added_score= abs(a-b);
    cout<<max(current_score,added_score)<<endl;
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