#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    int rem=y%x;
    if(rem==0){
        cout<<0<<endl;
    }
    else{
        cout<<x-rem<<endl;
    }
}