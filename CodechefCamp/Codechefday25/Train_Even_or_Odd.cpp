#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i+=2){
            sum1+=a[i];
        }
        for(int i=1;i<n;i+=2){
            sum2+=a[i];
        }
        if(sum1>sum2){
            cout<<sum1<<endl;
        }
        else{
            cout<<sum2<<endl;
        }
    }
}