#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int rem=x%10;
        if(rem <=4){
        x=x-rem;
        }
        else{
            x=x+(10-rem);
        }
        cout<<100-x<<endl;
    }
}