#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int l[n],r[n];
	    for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>r[i];
	    }
	    int res = 0;
	    int resr = 0;
	    int index = 0;
	    for(int i=0;i<n;i++){
	        if((l[i]*r[i]) > res){
	            res = l[i]*r[i];
	            resr = r[i];
	            index = i+1;
	        }
	        if((l[i]*r[i]) == res){
	            if(r[i] > resr){
	                index = i+1;
	                resr = r[i];
	            }
	        }
	    }
	    cout<<index<<endl;
	}
	return 0;
}
