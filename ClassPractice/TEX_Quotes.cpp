#include <bits/stdc++.h>
using namespace std;

int main()
{
    char tmp;
    int flag=0;
    while(scanf("%c",&tmp)!=EOF){
        if(tmp=='"'){
            printf(flag?"''":"``");
            flag=!flag;
        }
        else{
            printf("%c",tmp);
        }
    }
    return 0;
}
