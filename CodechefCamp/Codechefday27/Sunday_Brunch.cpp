#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int rem=x%y;
        if((y*20)<x){
            cout<<20<<endl;
        }
        else{
        cout<<(x-rem)/y<<endl;
        }
    }
}