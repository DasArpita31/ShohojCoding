#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        int res=1;
        cin>>x>>y;
        int Seven=0,Sodd=0;
        for(int i=x;i<=y;i+=x){
            if(i%2==0){
                Seven+=i;
            }
            else{
                Sodd+=i;
            }
        }
        if(Seven>=Sodd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
