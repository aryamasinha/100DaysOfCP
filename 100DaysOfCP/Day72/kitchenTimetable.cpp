#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0;
        int arr[n],arr2[n];
        for( int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            for(int i=0;i<n;i++)
            {
                cin>>arr2[i];
                if(i==0){
                    if(arr2[i]<=arr[i])
                    x++;
                }
                else if(arr2[i]<=arr[i]-arr[i-1])
                {
                    x++;
                }
            }
            cout<<x<<endl;
    }
}