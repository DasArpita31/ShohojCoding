#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int l=x*100;
        int m=y*10;
        if(l>=m) cout<<"Cloth"<<endl;
        else cout<<"Disposable"<<endl;
    }
}