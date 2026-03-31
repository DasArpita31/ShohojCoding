#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    
    int arr[n+1]={0};
    long long pSum[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pSum[i]=pSum[i-1]+arr[i];
    }
    while(q--){
        int i,r;
        cin>>i>>r;
        cout<<pSum[r]-pSum[i-1]<<endl;
    }
}
