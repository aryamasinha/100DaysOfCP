#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>c[i];
        sum += c[i];
    }
    if(sum == n*(n+1)/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}
