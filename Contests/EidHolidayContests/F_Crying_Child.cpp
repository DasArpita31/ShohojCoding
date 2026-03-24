#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m>n){
            cout<<m-n<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}