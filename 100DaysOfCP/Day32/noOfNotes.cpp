#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int temp,res = 0;
	    temp = n/100;
	    n -= temp*100;
	    res+= temp;
	    temp = n/50;
	    n -= temp*50;
	    res+= temp;
	    temp = n/10;
	    n -= temp*10;
	    res+= temp;
	    temp = n/5;
	    n -= temp*5;
	    res+= temp;
	    temp = n/2;
	    n -= temp*2;
	    res+= temp;
	    temp = n/1;
	    n -= temp*1;
	    res+= temp;
	    cout<<res<<endl;
	}
	return 0;
}
