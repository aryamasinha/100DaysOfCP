#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    char h[n];
	    for(int i=0;i<n;i++){
	        cin>>h[i];
	    }
	    int j = n-1;
	    for(int i=0;i<k;i++){
	        if(h[j] == 'H'){
	            for(int k=0;k<j;k++){
	                if(h[k] == 'H'){
	                    h[k] = 'T';
	                }
	                else{
	                    h[k] = 'H';
	                }
	            }
	        }
	        j--;
	    }
	    int count=0;
	    for(int i=0;i<(n-k);i++){
	        if(h[i] == 'H'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
