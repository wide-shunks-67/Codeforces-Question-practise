#include<iostream>
#include<unordered_map>
#include<vector>
#include <climits>
using namespace std;
void solve(){
    int n;
    cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     unordered_map<int,int>freq;
     for(int i=0;i<n;i++){
        if(freq.find(arr[i])!=freq.end())continue;
        for(int j=0;j<n;j++){
            if(arr[j]%arr[i]==0){ 
                freq[arr[i]]++;
            }
        }
     }
         int mini=INT_MAX;
     for(auto& [no , cnt]:freq){
        mini= min(mini, n-cnt);
     }
     cout<<mini<<endl;
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