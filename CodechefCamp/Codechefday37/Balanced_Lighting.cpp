#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int red=0,blue=0,zero=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            if(x==1) red++;
            else if(x==2) blue++;
            else zero++;
        }
            if(abs(red-blue)<=zero && (n%2==0)){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
    }
}
