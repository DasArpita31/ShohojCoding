#include<iostream>
using namespace std;

int main(){
    int n;
    long long t;
    cin>>n>>t;

    long long k[n];
    for(int i=0;i<n;i++){
        cin>>k[i];
    }

    long long l=1,h=1e18,ans=0;
    while(l<=h){
        long long mid=(l+h)/2;
        long long total=0;
        for(int i=0;i<n;i++){
            total+=mid/k[i];
            if(total>=t) break;
        }
        if(total>=t){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}