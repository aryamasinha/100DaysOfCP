#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n>=1){
	        int sq = sqrt(n);
	        n -= (sq*sq);
	        count++;
	    }
	    cout<<count<<endl;
	}

	return 0;
}
