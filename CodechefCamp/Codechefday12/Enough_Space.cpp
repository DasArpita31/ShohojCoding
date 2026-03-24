#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int res=x+(2*y);
        if(n>=res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
