#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int type[n];
	    for(int i=0;i<n;i++){
	        cin>>type[i];
	    }
	    long res = 0;
	    for(int i=0;i<n;i++){
	        res = res ^ type[i];
	    }
	    cout<<res<<endl;
	}
	return 0;
}
