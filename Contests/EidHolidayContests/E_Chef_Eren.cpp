#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int x=n/2;
        int res=x*a+(n-x)*b;
        cout<<res<<endl;
    }
}