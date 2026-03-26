#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<4) cout<<-1<<endl;
        else cout<<n*3-3<<endl;
    }
}