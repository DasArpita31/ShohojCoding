#include<iostream>
using namespace std;

int main(){
    int r1,r2;
    cin>>r1>>r2;
    int d1,d2;
    cin>>d1>>d2;
    int sum1,sum2;
    sum1=r1+d1;
    sum2=r2+d2;
    if(sum1>sum2){
        cout<<"Dominater"<<endl;
    }
    else{
        cout<<"Everule"<<endl;
    }
}