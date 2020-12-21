#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        while(k>0){
            if(n>m){
                m++;
                k--;
            }
            else if(n<m){
                n++;
                k--;
            }
            else{
                n++;
                m++;
                k=k-2;
            }
        }
        cout<<abs(n-m)<<endl;
    }
    return 0;
}