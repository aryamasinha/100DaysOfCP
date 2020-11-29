
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;
		int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
		sort(arr,arr+n);
	
		int s=arr[0]+arr[1];
		cout<<s<<endl;
	}
	return 0;
}
