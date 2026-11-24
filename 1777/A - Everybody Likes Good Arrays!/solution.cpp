#include<iostream>
#include<vector>
 
 
using namespace std;
using ll= long long;
int parity(ll x){
    if(x%2==0)return 0;
    else return 1;
}
void solve(){
     int n;
    cin>>n;
     vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int cnt=0;
    for (int i = 0; i + 1 < n; i++) {
        if (parity(a[i]) == parity(a[i + 1])) {
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
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