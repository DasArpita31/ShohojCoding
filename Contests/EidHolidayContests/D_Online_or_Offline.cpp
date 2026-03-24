#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float n,m;
        cin>>n>>m;
        float flat=(10*n)/100;
        float n1=n-flat;
        if(n1<m){
            cout<<"ONLINE"<<endl;
        }
        else if(n1>m){
            cout<<"DINING"<<endl;
        }
        else{
            cout<<"EITHER"<<endl;
        }
    }
}