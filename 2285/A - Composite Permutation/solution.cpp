#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n<=3){
        cout<<-1<<endl;
        return;
    }
    vector<int>p(n);
    if (n%2==0){
        for(int i=0;i<n;i++){
            p[i]=n-i;
        }
    }
    else{
        p[n-1]=2;
        p[n-2]=1;
        p[0]=n-1;
        p[1]=n;
        p[2]=n-2;
        int curr= n-3;
        for(int i=3;i<n-2;i++){
            p[i]=curr--;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout<<"
";
}
 int main(){
     int t;
     cin>>t;
     while(t--){
         solve();
     }
 }