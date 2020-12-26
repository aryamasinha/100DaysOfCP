#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int  n,i,j,p,q;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {p=1;
	        for(j=i+1;j<n;j++)
	        {
	            if(abs(a[j]+a[j-1])==(abs(a[j])+abs(a[j-1])))
	            break;
	            else
	            p++;
	        }
	        if(p>1)
	        {
	            q=p;
	            for(j=q;j>0;j--)
	            cout<<j<<" ";
	            i+=p-1;
	        }
	        else
	        cout<<1<<" ";
	        
	    }
	     cout<<endl;
	}
	return 0;
}
