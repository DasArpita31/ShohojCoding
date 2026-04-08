#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=(n/4)+((n%4)/2);
        cout<<a<<endl;
    }
}