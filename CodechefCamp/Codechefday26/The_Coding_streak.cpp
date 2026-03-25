#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=0,max=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        cout<<max<<endl;
    }
}