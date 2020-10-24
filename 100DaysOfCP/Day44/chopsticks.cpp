#include <bits/stdc++.h>
using namespace std;

int main() {
    	long long int n,d;
        cin>>n>>d;
	    long long int l[n];
	    for(long long int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    sort(l,l+n);
	    int count = 0;
	    if(n&1){
	         for(long long int i=0;i<n-1;){
	            if(abs(l[i] - l[i+1]) <= d){
	                count++;
	                i+=2;
	            } 
	            else{
	                i++;
	            }
	        }   
	    }
	    else{
	        for(long long int i=0;i<n-1;){
	            if(abs(l[i] - l[i+1]) <= d){
	                count++;
	                i+=2;
	            } 
	            else{
	                i++;
	            }
	        }
	    }
	    cout<<count<<endl;
	    return 0;
}
