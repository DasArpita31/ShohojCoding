#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int group=1;
    int pre,cur;
    cin>>pre;
        for(int i=1;i<n;i++){
            cin>>cur;
            if(cur!=pre){
                group++;
            }
            pre=cur;
    }
    cout<<group<<endl;
}