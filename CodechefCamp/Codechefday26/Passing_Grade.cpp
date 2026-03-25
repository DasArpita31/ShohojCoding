#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            int cutoff=a[0];
            if(cutoff<=a[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}