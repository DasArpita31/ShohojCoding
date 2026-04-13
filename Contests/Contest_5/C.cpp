#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int last=n%10;
        int first=n;
        while(first>=10){
            first/=10;
        }
        cout<<first+last<<endl;
    }
}