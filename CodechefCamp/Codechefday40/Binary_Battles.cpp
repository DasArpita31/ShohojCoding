#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;

        int r=0;
        while(n>1){
            n/=2;
            r++;
        }
        long long total=r*a+(r-1)*b;
        cout<<total<<endl;
    }
    return 0;
}
