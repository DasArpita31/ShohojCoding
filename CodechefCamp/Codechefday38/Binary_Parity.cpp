#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while (t--){
        int n;
        cin>>n;
        int ones=0;
        while(n>0){
            ones+=(n&1);
            n>>=1;
        }

        if (ones%2==0) cout<<"EVEN"<<endl;
        else cout<<"ODD"<<endl;
    }

    return 0;
}
