#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int a=a1-a2;
        int b=b1-b2;
        int net=a+b;
        if(net>=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}