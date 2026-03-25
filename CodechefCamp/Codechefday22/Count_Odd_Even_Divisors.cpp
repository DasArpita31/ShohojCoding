#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even=0,odd=0;
        for(int i=1;i<=n;i++){
           if(n%i==0){
            if(i%2==0) even++;
            else odd++;
           }
        }
        cout<<odd<<" "<<even<<" "<<endl;
    }
}

