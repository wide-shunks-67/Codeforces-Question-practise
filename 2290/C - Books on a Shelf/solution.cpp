#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
     map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
         freq[arr[i]]++;
    }
    int visible_count=0;
    vector<int>left_side;
     
    vector<int>right_side;
    for (auto& [h, count] : freq) {
        if (count >= 2) {
            left_side.push_back(h);
            right_side.push_back(h);
            visible_count += 2;
           
            for (int i = 0; i < count - 2; i++) {
                left_side.push_back(h);
            }
        } else {
            visible_count += 1;
            left_side.push_back(h);
        }
    }
    vector<int> ans;
    for (int x : left_side) ans.push_back(x);
    
    for (int i = (int)right_side.size() - 1; i >= 0; i--) {
        ans.push_back(right_side[i]);
    }
    cout<<visible_count<<"
";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout<<"
";
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