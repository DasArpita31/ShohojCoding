#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans = INT_MAX;
	    for(int i=0;i<n-1;i++){
	        ans = min(ans, a[i] + a[i+1]/2);
	    }
	    int mn1=INT_MAX,mn2=INT_MAX;

        for(int i=0;i<n;i++) {
            if(a[i] < mn1) {
                mn2 = mn1;
                mn1 = a[i];
            } else if(a[i] < mn2) {
                mn2 = a[i];
            }
        }
        ans=min(ans,mn1+mn2);
        cout<<ans<<endl;
	}

}
