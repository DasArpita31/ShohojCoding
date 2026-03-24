#include<bits/stdc++.h>
using namespace std;

int a,b,c;
int main(){
	cin>>a>>b>>c;
	if(b<c){
		if(b<a&&a<c){
			cout<<"No";
		}else{
			cout<<"Yes";
		}
	}else{
		if(a>b||a<c){
			cout<<"No";
		}else{
			cout<<"Yes";
		}
	}
	return 0;
}