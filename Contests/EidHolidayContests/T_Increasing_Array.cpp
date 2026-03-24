#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    long long move=0;
    long long max=x[0];

    for(int i=1;i<n;i++){
        if(x[i]<max){
            move+=max-x[i];
        }
        else{
            max=x[i];
        }
    }
    cout<<move<<endl;
}