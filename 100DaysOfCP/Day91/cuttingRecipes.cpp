#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int min=*min_element(a,a+n),res=1;
        for(int i=min;i>1;i--)
        {
            bool flag=true;
            for(int j=0;j<n;j++)
                if(a[j]%i!=0)
                {
                    flag=false;
                    j=n;
                }
            if(flag)
            {
                res=i;
                i=0;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]/res<<" ";
        cout<<endl;
    }
}