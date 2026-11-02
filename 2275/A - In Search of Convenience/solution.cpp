#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,r;
        cin>>x>>y>>r;
        int ans_x;
        int ans_y;
        bool found=false;
        for(int i=-50;i<=50;i++){
            for(int j=-50;j<=50;j++){
                int d1=x-i;
                int d2=y-j;
                int dis= d1*d1 + d2*d2;
                if(r*r==dis){
                    found=true;
                   ans_x=i;
                   ans_y=j;
                    break;
                }
            }
            if(found)break;
        }
        cout<<ans_x<<" "<<ans_y<<endl;
    }
}