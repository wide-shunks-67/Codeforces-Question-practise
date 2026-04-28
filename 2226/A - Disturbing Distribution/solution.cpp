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
        int sum=0;
        int last_idx_1=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=2){
                sum=(sum+a[i])%M;
                last_idx_1=i;
            }
        }
        bool has_one=false;
        for(int i= last_idx_1 + 1; i<n;i++){
            if(a[i]==1){
                has_one=true;
                break;
            }
        }
        if(has_one){
            sum= (sum + 1)%M;
            
        }
        cout<<sum<<"
";
    }
}