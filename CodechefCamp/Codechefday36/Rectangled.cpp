#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=n/2;
        int b=a/2;
        cout<<b*(a-b)<<endl;
    }
}