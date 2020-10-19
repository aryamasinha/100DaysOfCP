#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int flag = 1;
	    int count = 0;
	    int temp;
	    int a[30];
	    for(int i=0;i<30;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<30;i++){
	        if(a[i] == 1){
	            count++;
	            if(count > 5){
	                flag = 0;
	                break;
	            }
	        }
	        else{
	            count = 0;
	        }
	    }
	    if(flag){
	        cout<<"#allcodersarefun"<<endl;
	    }
	    else{
	        cout<<"#coderlifematters"<<endl;
	    }
	}
	return 0;
}
