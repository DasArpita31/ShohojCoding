#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int res=gcd(a,b);
        if(c%res==0){
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<i<<": No"<<endl;
        }
    }
}