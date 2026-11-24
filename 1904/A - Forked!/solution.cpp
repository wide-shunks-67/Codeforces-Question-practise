#include<iostream>
#include<set>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
 
    int d1[8]={a,a,-a,-a,b,b,-b,-b};
    int d2[8]={b,-b,b,-b,a,-a,a,-a};
    set<pair<int,int>>king;
    set<pair<int,int>>queen;
    for(int i=0;i<8;i++){
        king.insert({x1+d1[i],y1+d2[i]});
        queen.insert({x2+d1[i],y2 + d2[i]});
    }
    int cnt=0;
    for(auto& pos: king){
        if(queen.find(pos)!=queen.end()){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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