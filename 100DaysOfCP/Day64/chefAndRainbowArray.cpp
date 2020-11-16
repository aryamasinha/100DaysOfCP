#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int c1,c2,c3,c4,c5,c6,c7,k;
	    c1=c2=c3=c4=c5=c6=c7=k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==1)c1++;
	        if(arr[i]==2)c2++;
	        if(arr[i]==3)c3++;
	        if(arr[i]==4)c4++;
	        if(arr[i]==5)c5++;
	        if(arr[i]==6)c6++;
	        if(arr[i]==7)c7++;
	        if(arr[i]==arr[n-1-i])k++;
	    }
	    if((c1>0 && c2>0 && c3>0 && c4>0 && c5>0 && c6>0 && c7>0)&&(c1+c2+c3+c4+c5+c6+c7)==n && (k==n))
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
