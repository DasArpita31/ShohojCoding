#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b=sqrt(n);
        int ans=b*b;
        cout<<ans<<endl;
    }
}