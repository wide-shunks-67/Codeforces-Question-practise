#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#define M 676767677
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int ans=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
             
        }
       
        for(int i=0;i<n-1;i++){
             if(abs(a[i]-a[i+1])== __gcd(a[i],a[i+1])){
                ans++;
            }
        }
        cout<<ans<<"
";
    }
}