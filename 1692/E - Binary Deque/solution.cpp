#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        ll sum=0;
      
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            
        }
        if(s>sum){
            cout<<-1<<"
";
        }
        else if(s==sum){
            cout<<0<<"
";
        }
        else{
            ll max_len=0;
            ll curr_sum=0;
            ll left=0;
            for(int right=0;right<n;right++){
                curr_sum+=a[right];
                while(curr_sum>s){
                    curr_sum-=a[left];
                    left++;
                }
                if(curr_sum==s){
                    max_len= max(max_len, right - left + 1);
                }
            }
            cout<<n- max_len<<"
";
        }
    }
 }