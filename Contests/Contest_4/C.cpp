#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string f,s,se;
    cin>>f;
        int count=1;
        for(int i=1;i<n;i++){
            cin>>s;
            if(s==f) count++;
            else se=s;
        }
        if(count>n/2) cout<<f<<endl;
        else cout<<se<<endl;
}