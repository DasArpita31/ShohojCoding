#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    int normal=(h+x-1)/x;
        int special;
        if(h<=y){
            special=1;
        } else {
            special=1+(h-y+x-1)/x;
        }
        cout<<min(normal,special)<<endl;
}

}
