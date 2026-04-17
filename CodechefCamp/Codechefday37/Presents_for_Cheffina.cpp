#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long c=n-(n/5);
        cout<<c<<endl;
    }
}