#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(k>=2){
        cout<<"Yes"<<endl;
    }
    else if(!is_sorted(a.begin(),a.end())){
        cout<<"No"<<endl;
    }else{
        cout<<"yes"<<endl;
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