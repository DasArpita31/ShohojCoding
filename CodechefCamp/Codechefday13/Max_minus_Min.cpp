#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=max(a,max(b,c));
        int y=min(a,min(b,c));
        cout<<x-y<<endl;
    }
}