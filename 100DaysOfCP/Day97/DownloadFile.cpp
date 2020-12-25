#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,f,cost = 0;
        cin>>n>>f;
        for (int i=0;i<n;i++)
        {
            int t1,d;
            cin>>t1>>d;
            if (f>0)
            {
                if (f<t1)
                {
                    int temp = t1;
                    t1 -= f;
                    f -= temp;
                    cost += (t1*d);
                }
                else
                {
                    f -= t1;
                }
            }
            else{
                cost += (t1*d);
            }
            
        }
        cout << cost << endl;
    }
    return 0;
}