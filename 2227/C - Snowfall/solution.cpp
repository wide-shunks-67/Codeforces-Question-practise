#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>div6,div2,div3,others;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if (a[i] % 6 == 0) {
            div6.push_back(a[i]);
        } else if (a[i] % 2 == 0) {
            div2.push_back(a[i]);
        } else if (a[i] % 3 == 0) {
            div3.push_back(a[i]);
        } else {
            others.push_back(a[i]);
        }
        }
        vector<int>result;
        for(auto x:div6)result.push_back(x);
        for(auto x:div3)result.push_back(x);
        for(auto x:others)result.push_back(x);
        for(auto x:div2)result.push_back(x);
        for(int i=0;i<n;i++){
            cout<<result[i]<<" ";
        }
        cout<<"
";
    }
}