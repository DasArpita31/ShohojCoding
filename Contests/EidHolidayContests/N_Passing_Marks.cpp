#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int df=n-x;
        sort(a,a+n);
        int res=a[df]-1;
        if(res<0)
        res=0;
        cout<<res<<endl;
    }
}