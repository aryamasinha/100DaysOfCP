#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    int a[x]={0};
	    string f[x],l[x];
	    for(int i=0;i<x;i++)
	    {
	        cin>>f[i];
	        cin>>l[i];
	    }
	    for(int i=0;i<x-1;i++)
	    {
	        for(int j=i+1;j<x;j++)
	        {
	            if(f[i]==f[j])
	            {
	                a[i]++;
	                a[j]++;
	            }
	        }
	    }
	     for(int i=0;i<x;i++)
	    {
	        if(a[i]==0)
	        cout<<f[i]<<endl;
	        else
	        cout<<f[i]<<" "<<l[i]<<endl;
	    }
	}
	return 0;
}
