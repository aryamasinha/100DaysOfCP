#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long int N,B;
        cin>>N>>B;
        
        long long int W,H,P;
        long long int max_area=INT_MIN;
        
        for(int i=0;i<N;i++) {
            cin>>W>>H>>P;
            
            long long int area =W*H;
            
            if(P>B)
                continue;
            else
                max_area=max(max_area,area);
        }
        
        if(max_area==INT_MIN)
            cout<<"no tablet"<<endl;
        else
            cout<<max_area<<endl;
        
    }

    return 0;
}