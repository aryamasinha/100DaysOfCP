#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
   long long int n,b,m,a;
        cin>>n>>b>>m;
        long long int s=0;
        while(n>0){
            if((n%2)==0)
                a=n/2;
            else
                a=(n+1)/2;
            if(n==1)
                s=s+(a*m);
            else
                s=s+(a*m)+b;
            n=n-a;
            m=2*m;
        }
        cout<<s<<endl;
}
	return 0;
}
