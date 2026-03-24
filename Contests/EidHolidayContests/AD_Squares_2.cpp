#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double res=(2.0/3.0)*(1-pow(4,-n));
    double b=res*100;
    cout<<fixed<<setprecision(5)<<b<<endl;
}