#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) 
            count++;
            }
        }
        if(count>0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}