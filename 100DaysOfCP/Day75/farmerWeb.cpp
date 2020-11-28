#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int sum =a+b;
        int c=0;
        
        while(1) {
            if(sum%2 ==0) {
            sum++;
        }
        else
        sum += 2;
        int c = 0;
        for(int i=1;i<=sum/i;i++) {
            if(sum%i==0 ) {
                if(sum/i == i) {
                    c++;
                }
                else
                c+=2;
            }
            if(c>2) {
                break;
            }
        }
        if(c==2) {
            break;
        }
        }
        cout<<sum-(a+b)<<endl;
    }
}