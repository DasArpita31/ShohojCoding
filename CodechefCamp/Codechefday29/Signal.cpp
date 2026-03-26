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

        int pos=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                pos=i;
                break;
            }
        }
        int count=0;
        if(pos!=-1){
        for(int i=pos+1;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
    }
        cout<<count<<endl;
    }
}