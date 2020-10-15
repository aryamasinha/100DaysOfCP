#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    long int key = a[k-1];
	    sort(a,a+n);
	    int i;
	    for(i=0;i<n;i++){
	        if(key == a[i]){
	            break;
	        }
	    }
	    cout<<(i+1)<<endl;
	}
	return 0;
}
