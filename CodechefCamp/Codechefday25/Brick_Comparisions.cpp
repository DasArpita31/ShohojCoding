#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int pos=1,max=a[1];
        for(int i=1;i<=n;i++){
            if(a[i]>max){
                max=a[i];
                pos=i;
            }
        }
        cout<<pos<<endl;
    }
}