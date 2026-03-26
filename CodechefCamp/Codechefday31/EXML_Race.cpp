#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=0;
        int count=0;
        for(int i =1;i<=n;i++){
            int d,t;
            cin>>d>>t;
            int div=d/t;
            if(div>max){
                max=div;
                count=i;
            }
        }
        cout<<count<<endl;
    }
}