#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+1]={0};
        long long pSum[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pSum[i]=pSum[i-1]+a[i];
        }
        long long total=pSum[n];
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            long long count=r-l+1;
            long long rangeSum=pSum[r]-pSum[l-1];
            long long newSum=total-rangeSum+(count*k);
            if(newSum%2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
