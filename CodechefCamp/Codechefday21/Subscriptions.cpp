#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int rem=n%6;
        int res=n/6;
        if(rem==0){
            cout<<res*x<<endl;
        }
        else{
            cout<<(res+1)*x<<endl;
        }
    }
}