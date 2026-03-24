#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        long long s=sqrt(x);

        if(s*s==x){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
}