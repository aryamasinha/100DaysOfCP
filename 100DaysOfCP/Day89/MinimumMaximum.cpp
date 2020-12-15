#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        int min = a[0];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int minimum = a[0];
        for(int i=1;i<n;i++){
            if(minimum>a[i]){
                minimum = a[i];
            }
        }
        
        cout<<minimum*(n-1)<<endl;
    }
	return 0;
}
