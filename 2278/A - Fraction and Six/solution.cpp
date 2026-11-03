#include<iostream>
#include<unordered_map>
#include<cmath>
using namespace std;
void solve(){
    int n,m;
       cin>>n>>m;
       string p,q;
       cin>>p;
       cin>>q;
       unordered_map<char,int>num_map;
       unordered_map<char,int>deno_map;
 
       for(int i=0;i<n;i++){
        num_map[p[i]]++;
       }
       for(int i=0;i<m;i++){
        deno_map[q[i]]++;
       }
 
       for (auto& entry : deno_map) {
            char ch = entry.first;
            int deno_freq = entry.second;
        if (num_map.find(ch) != num_map.end()) {
            int common = min(num_map[ch], deno_freq);
            num_map[ch] -= common;
            deno_map[ch] -= common;
        }
    }
       unordered_map<char,int>target = {{'s',1}, {'i',1}, {'x',1}};
       for(auto& entry:deno_map){
        int freq= entry.second;
        if(freq>0){
            cout<<"No"<<endl;
            return;
        }
       }
       for(auto& entry:num_map){
         char c = entry.first;
         int freq= entry.second;
         if(freq>0){
            if(target.find(c)==target.end() ||target[c]!=freq){
                cout<<"No"<<endl;
                return;
            }
            target.erase(c);
         }
       }
       if(target.empty()){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
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