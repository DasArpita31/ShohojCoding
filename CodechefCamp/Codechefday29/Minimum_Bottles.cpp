#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<=x){
            cout<<1<<endl;
        }
        else{
            if(sum%x==0){
                cout<<sum/x<<endl;
            }
            else{
                cout<<(sum/x)+1<<endl;
            }
        }
    }
}