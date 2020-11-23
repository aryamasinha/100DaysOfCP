#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int idx = -1;
        for(int i=0;i<n;i++){
            if(a[i] == 7){
                idx = i;
            }
        }
        int flag = 1;
        if(idx == -1){
            flag = 0;
        }
        else{
            int j = idx+1;
            int k=6;
            for(int i=idx-1;i>=0;i--){
                if(a[i] != a[j] || (a[i] != k) || (a[j] != k)){
                    flag = 0;
                    break;
                }
                j++;
                if(a[i] != a[i-1] && i>0){
                    k--;
                }
            }    
        }
        if(flag){
            cout<<"yes"<<endl;    
        }
        else{
            cout<<"no"<<endl;    
        }
    }
	return 0;
}
