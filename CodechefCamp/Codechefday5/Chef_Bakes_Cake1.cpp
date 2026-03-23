#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(n==m){
        cout<<m*20<<endl;
    }
    if(n>m){
        cout<<-((n*30)-(m*50))<<endl;
    }
}