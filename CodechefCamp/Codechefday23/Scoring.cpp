#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int res1=(x+y)/2;
        int res2=(y-x)/2;

        cout<<res1<<" "<<res2<<endl;
    }
}