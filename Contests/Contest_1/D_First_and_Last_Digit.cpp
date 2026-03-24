#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int N;
        cin>>N;
        int F;
        int rem=N%10;
        while(N>=10){
            N=N/10;
        }
        F=N;
        sum=rem+F;
        cout<<sum<<endl;
    }
}