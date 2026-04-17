#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        int a[101];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int sad=0;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;

            if(a[x]>0){
                a[x]--;
            }
            else{
                sad++;
            }
        }
        cout<<sad<<endl;
    }
}