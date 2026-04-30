#include<iostream>
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
        int cnt_1=0;
        int cnt_2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt_1++;
            }
            else{
                cnt_2++;
            }
        }
        if(cnt_1==cnt_2){
            cout<<"Yes
";
        }
        else cout<<"No
";
    }
}