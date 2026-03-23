#include<iostream>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    if(l>r){
        cout<<l-r<<endl;
    }
    else if(l<r){
        cout<<r-l<<endl;
    }
    else{
        cout<<0<<endl;
    }
}