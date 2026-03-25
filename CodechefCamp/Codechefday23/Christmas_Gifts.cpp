#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,l,w;
        cin>>h>>l>>w;
        int res=2*((h*l)+(l*w)+(w*h));
        cout<<1000/res<<endl;
    }
}