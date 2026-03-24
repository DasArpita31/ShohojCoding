#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    int dis1=(100-a);
    int dis2=(200-2*b);
    if(dis1>dis2){
        cout<<"SECOND"<<endl;
    }
    else if(dis1<dis2){
        cout<<"FIRST"<<endl;
    }
    else{
        cout<<"BOTH"<<endl;
    }
}
}