#include<iostream>
using namespace std;

int main(){
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int cd=a*b*c;
    int cub=x*x*x;
    if(cd>cub) cout<<"Cuboid"<<endl;
    else if(cd<cub) cout<<"Cube"<<endl;
    else cout<<"Equal"<<endl;
}