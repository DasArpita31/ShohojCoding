#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int n=50-x;
        if(n>=2*y && n<=2*y+10) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}