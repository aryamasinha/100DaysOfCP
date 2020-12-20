#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    double s;
	    cin>>s;
	    if(s<1500)
	    {
	        s=2*s;
	    }
	    else if(s>=1500)
	    {
	        s=1.98*s;
	        s+=500;
	    }
	    cout<<fixed<<setprecision(2)<<s<<endl;
	}
	return 0;
}
