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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        reverse(a.begin(),a.end());
        if(a[0]==a[n-1]){
            cout<<"No
";
        }else{
            if(n>2){
                if(a[0]==a[1]){
                    swap(a[1],a[n-1]);
                }
            }
            cout<<"Yes
";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"
";
        }
        
    }
    return 0;
}