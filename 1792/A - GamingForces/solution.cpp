// Online C++ compiler (editor)
// Write and run C++ online using this editor.
 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    // Write C++ code here
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int cnt_1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                cnt_1++;
            }
        }
        cout<<n-(cnt_1/2)<<endl;
        
    }
    return 0;
}