#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int share=n/(k+1);
        cout<<n-(share*k)<<endl;
    }
}