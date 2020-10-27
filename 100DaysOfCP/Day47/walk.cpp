#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long int w[n];
	    for(int i=0;i<n;i++){
	        cin>>w[i];
	    }
	    long int res = w[0];
	    for(int i=1;i<n;i++){
	        if(res < w[i]+i){
	            res = w[i]+i;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
