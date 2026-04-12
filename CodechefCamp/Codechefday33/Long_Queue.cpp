#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[105];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pos=n;
        int x=a[n-1];

        for(int i=n-2;i>=0;i--){
            if(a[i]<=x/2){
                pos--;
            }
            else{
                break;
            }
        }
        cout<<pos<<endl;
    }
}