class Solution {
public:
    string checkOddPairs(int a, int b, int c) {
    if((a+b)%2!=0 || (a+c)%2!=0 || (b+c)%2!=0){
            return "YES";
        }
        else{
            return "NO";
        }
    }
};
void solve()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<obj.checkOddPairs(a, b, c)<<endl;
    }
}
