#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int Pa,Pb,Qa,Qb;
        cin>>Pa>>Pb>>Qa>>Qb;

        int p=max(Pa,Pb);
        int q=max(Qa,Qb);
        if(p>q){
            cout<<"Q"<<endl;
        }
        else if(p<q){
            cout<<"P"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
}