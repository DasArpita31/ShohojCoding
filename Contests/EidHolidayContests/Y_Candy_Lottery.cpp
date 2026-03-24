#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    double expected = 0.0;

    for(int i = 1; i <= k; i++) {
        double p = pow((double)i/k, n) - pow((double)(i-1)/k, n);
        expected += i * p;
    }

    cout << fixed << setprecision(6) << expected << endl;
}
