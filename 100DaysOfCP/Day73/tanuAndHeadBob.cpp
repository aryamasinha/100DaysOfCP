#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int indian = false , foreign = false;
        for(int i=0;i<n;i++){
            if(str[i] == 'Y'){
                foreign = true;
                break;
            }
            if(str[i] == 'I'){
                indian = true;
                break;
            }
        }
        if(indian){
            cout<<"INDIAN"<<endl;
        }
        else if(foreign){
            cout<<"NOT INDIAN"<<endl;
        }
        else{
            cout<<"NOT SURE"<<endl;
        }
    }
	return 0;
}
