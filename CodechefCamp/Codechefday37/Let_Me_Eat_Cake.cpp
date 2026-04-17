#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int total=0;
        while(a!=b){
            if(a>b){
                int eat=(a+1)/2;
                total+=eat;
                a-=eat;
            }
            else{
                int eat=(b+1)/2;
                total+=eat;
                b-=eat;
            }
        }
        cout<<total<<endl;
	}
}
