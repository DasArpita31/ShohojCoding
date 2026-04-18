#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int total=a+b+c;
        int mx=max({a,b,c});
        if(mx<=(total+1)/2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
	}
}
