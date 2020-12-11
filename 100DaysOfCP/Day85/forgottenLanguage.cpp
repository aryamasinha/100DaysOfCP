#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i,j,p;
	cin>>n>>k;
	string s[n];
	int a[n]={0};	
	for(i=0;i<n;i++)
	  cin>>s[i];
	  int l=0;
	for(i=0;i<k;i++)
	{
	    cin>>l;	
		string s1[l];
		for(j=0;j<l;j++)
		{
		cin>>s1[j];
		for(p=0;p<n;p++)
		{
			if(s[p]==s1[j])
			{
				a[p]=1;
			}
		}
	    }
	}
	  for(i=0;i<n;i++)
	  if(a[i]==1)
	  cout<<"YES"<<" ";
	  else
	  cout<<"NO"<<" ";
	cout<<endl;
	}
	return 0;
}
