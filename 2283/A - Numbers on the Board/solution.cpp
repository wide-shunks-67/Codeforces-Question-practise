// Online C++ compiler (editor)
// Write and run C++ online using this editor.
 
#include <iostream>
#include<unordered_map>
using namespace std;
void solve(){
    int l,r;
     cin>>l>>r;
    unordered_map<int,int>freq;
    for(int i=l;i<=r;i++){
        freq[abs(i)]++;
    }
    int c=0;
    bool set=false;
    for(auto& [no,cnt]:freq){
        if(no==0)continue;
        if(cnt!=2){
            if(!set){
                set=true;
            }else c++;
        }
    }
    cout<<c<<endl;
}
int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
}