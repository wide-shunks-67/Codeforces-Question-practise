#include<iostream>
using namespace std;
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int n = x+y+z;
        string s="";
        if(x>=y){
            for(int i=0;i<n;i++){
                s+="P";
            }
        }
        else if(y>=z){
            for(int i=0;i<n;i++){
                s+="R";
            }
        }
        else if(z>=x){
            for(int i=0;i<n;i++){
                s+="S";
            }
        }
        cout<<s<<endl;
    }
 
 }