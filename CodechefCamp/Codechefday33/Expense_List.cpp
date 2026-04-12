#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int r=1<<(x-n);
        cout<<r<<endl;
    }
}