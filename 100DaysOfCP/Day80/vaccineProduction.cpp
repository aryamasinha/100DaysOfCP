#include <bits/stdc++.h>
using namespace std;

int main() {
    int v1,d1,v2,d2,d;
    cin>>d1>>v1>>d2>>v2>>d;
    int res = max(d1,d2)-1;
    int total = 0;
    while(total <= d){
        total += v1+v2;
        res++;
        if(total == d){
            break;
        }
    }
    cout<<res<<endl;
	return 0;
}
