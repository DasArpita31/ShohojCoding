#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((2*x)>(y*5)) cout<<"Chocolate"<<endl;
        else if((2*x)<(y*5)) cout<<"Candy"<<endl;
        else cout<<"Either"<<endl;
    }
}