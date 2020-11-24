#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        int val=0;
        cin>>n>>k;
        for(int i=2;i<=k;i++){
            if(val<n%i){
                val=n%i;
            }
        }
        cout<<val<<endl;
    }
	return 0;
}


