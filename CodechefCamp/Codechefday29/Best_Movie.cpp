#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        int ans=1e9;
        for(int i=0;i<n;i++){
            cin>>a;
            cin>>b;
            if(a>=7){
                ans=min(ans,b);
            }
        }
        if(ans==1e9){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}
