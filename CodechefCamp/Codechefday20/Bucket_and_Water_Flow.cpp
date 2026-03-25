#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z,res=0;
        cin>>w>>x>>y>>z;
        res=x-(w+y*z);
        if(res<0){
            cout<<"overFlow"<<endl;
        }
        else if(res==0){
            cout<<"filled"<<endl;
        }
        else{
            cout<<"unfilled"<<endl;
        }
    }
}
