#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     long long int pp1,pp2,n;
     cin>>pp1>>pp2>>n;
     if(n%2!=0)
     {
         pp1=pp1*2;
         
     }
     long long int maximum,minimum;
     if(pp1>pp2)
     {  maximum = pp1;
        minimum = pp2;  
         
     }
     else
     {  maximum = pp2;  
        minimum = pp1;  }
     long long int ans=maximum/minimum;
     cout<<ans<<endl;
    }
    return 0;
}