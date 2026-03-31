#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int fre[m+1]={0};
    for(int i=0;i<n;i++){
        int ar=a[i];
        fre[ar]++;
    }
    for(int i=1;i<=m;i++){
        cout<<fre[i]<<endl;
    }
}
