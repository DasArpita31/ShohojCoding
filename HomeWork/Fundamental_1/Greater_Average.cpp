#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        double res=((double)(a+b)/2);
        if(res>c){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}