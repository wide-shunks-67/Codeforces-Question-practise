#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int cnt1=0;
    int cntn1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)cnt1++;
        else cntn1++;
    }
    int cnt=0;
    if(cnt1>=cntn1){while(cnt1>=cntn1 && cntn1%2!=0){
        cnt1++;
        cntn1--;
        cnt++;
    }}
    else if(cnt1<cntn1){
        while(cnt1<cntn1){
            cnt1++;
            cntn1--;
            cnt++;
        }
        while(cnt1>=cntn1 && cntn1%2!=0){
        cnt1++;
        cntn1--;
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