#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(y> 2*x){
            cout<<"YES
";
        }
        else{
            cout<<"no
";
        }
    }
}