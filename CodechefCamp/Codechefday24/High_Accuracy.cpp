#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<(3-x%3)%3<<endl;
    }
}