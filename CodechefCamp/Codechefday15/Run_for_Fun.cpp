#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int res=y/x;
    if(y%x==0)
    res--;
    cout<<res<<endl;
}