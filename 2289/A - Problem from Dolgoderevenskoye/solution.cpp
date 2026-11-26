// Online C++ compiler (editor)
// Write and run C++ online using this editor.
 
#include <iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
using ll= long long;
int main() {
    // Write C++ code here
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin>>t;
    while(t--){
         ll x;
        cin>>x;
        if(x%2==1){
            cout<<"yes
";
        }
        else if(x%4==0){
            cout<<"yes
";
        }
        else{
           cout<<"no
"; 
        }
    }
    return 0;
}