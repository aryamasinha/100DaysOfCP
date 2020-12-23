#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    bool flag=false;
	    if(s.size()%2==0)
	    for(int i=0;i<s.size();i++)
	    {
	        
	        if(s[i]!=-1)
	        {
	            count=1;
	            for(int j=0;j<s.size();j++)
	            {
	                if(s[i]==s[j]&&j!=i)
	                {
	                    count++;
	                    s[j]=-1;
	                }
	            }
	            if(count==s.size()/2)
	            {
	                cout<<"YES";
	                flag=true;
	                break;
	            }
	        }
	    }
	    if(!flag)
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
