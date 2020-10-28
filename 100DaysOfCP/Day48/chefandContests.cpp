#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,r;
	cin>>n>>r;
	int R[n];
	int res = 0;
	for(int i=0;i<n;i++){
	    cin>>R[i];
	}
	for(int i=0;i<n;i++){
	    if(R[i] >= r){
	        cout<<"Good boi"<<endl;
	    }
	    else{
	        cout<<"Bad boi"<<endl;
	    }
	}
	return 0;
}
