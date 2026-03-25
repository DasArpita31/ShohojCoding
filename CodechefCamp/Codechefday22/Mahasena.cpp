#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
}