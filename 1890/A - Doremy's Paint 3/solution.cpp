#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_map>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    if(freq.size()>2){
        cout<<"No
";
    }
    else if(freq.size()==2){
        int diff=0;
        for( auto& [key,val]:freq){
            diff= abs(diff-val);
        }
        if(diff<=1){
            cout<<"yes
";
        }
        else{
            cout<<"no
";
        }
    }
    else{
        cout<<"yes
";
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