#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
     cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long base=0;
    long long height=0;
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int val= 1LL<<arr[i];
        if(base<=height){
            base+=val;
        }
        else{
            height+=val;
        }
    }
    cout<<base*height<<endl;
    
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