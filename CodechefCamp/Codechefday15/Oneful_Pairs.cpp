#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int res=a+b+(a*b);
    if(res==1 || res==11 || res==111 || res==1111) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}