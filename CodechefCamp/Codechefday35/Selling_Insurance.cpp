#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(100%x==0) cout<<500/x<<endl;
	    else cout<<(500/x)+1<<endl;
	}
}
