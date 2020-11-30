#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int count=0,prev;
        long long ans=0;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(i==1)
            {
                prev=x;
                count++;
            }
            else
            {
                if(prev<=x)
                    count++;
                else
                    count=1;
            }
            ans+=count;
            prev=x;
        }
        cout<<ans<<endl;
    
        
    }
	return 0;
}

