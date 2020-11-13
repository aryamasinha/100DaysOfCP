#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[4],s1[4];
        int i,j,res=0;
        for(i=0;i<4;i++)
        {
            cin>>s[i];
        }
        for(j=0;j<4;j++)
        {
            cin>>s1[j];
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(s[i] == s1[j])
                {
                    res++;
                }
            }
        }
        if(res>=2)
           cout<<"similar"<<endl;
        else 
           cout<<"dissimilar"<<endl;
    }
    return 0;
}