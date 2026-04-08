#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string first="";

        for(int i=0;i<x/2;i++) first+='1';
        for(int i=0;i<y/2;i++) first+='2';

        string second=first;
        reverse(second.begin(),second.end());
        cout<<first+second<<endl;
    }
}