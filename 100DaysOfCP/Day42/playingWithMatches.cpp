#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int a,b;
	    cin>>a>>b;
	    int arr[10] = {6,2,5,5,4,5,6,3,7,6};
	    long int res = a+b;
	    int count = 0;
	    while(res !=0){
	        int d = res%10;
	        count += arr[d];
	        res /= 10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
