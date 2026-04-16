#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int left=max(x-y,x-z);
        int right=min(x+y,x+z);

        if(left>right){
            cout<<0<<endl;
        }
        int total=right-left+1;
        if(x>=left && x<=right){
            total--;
        }
        cout<<total<<endl;
    }
}
