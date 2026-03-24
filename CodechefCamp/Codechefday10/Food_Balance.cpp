#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int f1,p1,f2,p2;
    cin>>f1>>p1>>f2>>p2;
    int dif1=abs(p1-f1);
    int dif2=abs(f2-p2);
    if(dif1<dif2) cout<<"First"<<endl;
    else if(dif1==dif2) cout<<"Both"<<endl;
    else cout<<"Second"<<endl;
}