#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n,a,b,count;
        cin>>m>>n;
        a=m;
        b=n;
            while(m!=n){
                if(m>n){
                    m-=n;
                }
                else{
                    n-=m;
                }
            }
            count=a/m;
            count*=b/m;
            cout<<count<<endl;
    }
    return 0;
}
