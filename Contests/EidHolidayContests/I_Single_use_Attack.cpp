#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        int count=1;
           h=h-y;
            if(h>0){
                count+=(h+x-1)/x;
            }
        cout<<count<<endl;
    }
}