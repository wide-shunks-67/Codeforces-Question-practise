#include<iostream>
#include<string>
#include<vector>
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
        long long ans=0;
        vector<bool>isRemoved(n+1,false);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(s[j-1]=='1'){
                    break;
                }
                if(isRemoved[j])continue;
                else{
                    isRemoved[j]=true;
                    ans+=i;
                }
            }
        }
        cout<<ans<<"
";
    }
}