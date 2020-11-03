#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b;
	    cin>>a>>b;
	    int m = 1;
	    long long int res = 0;
	    while(a != 0 || b != 0){
	        int d = a%10 + b%10;
	        int temp = d%10;
	        res  = temp*m + res;
	        m *= 10;
	        a /= 10;
	        b/= 10;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
