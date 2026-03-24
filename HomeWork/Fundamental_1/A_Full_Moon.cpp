#include<iostream>
using namespace std;

int main(){
    int n,m,p;
    cin>>n>>m>>p;
    int count=0;
    while(m<=n){
        count++;
        m+=p;
    }
    cout<<count<<endl;
}