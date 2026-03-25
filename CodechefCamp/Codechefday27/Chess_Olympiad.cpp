#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    float a1=x+y*0.5;
    float a2=z+y*0.5;
    int r=4-(x+y+z);
    float m=r+a1;

    if(m>a2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
