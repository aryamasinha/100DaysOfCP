#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    bool flag = true;
	    int count1[26] = {0};
	    string str;
	    cin>>str;
	    int len = str.length();
	    int mid = len/2;
	    if(len&1){
	        int i;
	        for(i=0;i<mid;i++){
	            count1[str[i]-'a']++;
	        }
	        mid = mid+1;
	        for(i=mid;i<len;i++){
	            count1[str[i]-'a']--;
	        }
	        for(int i=0;i<26;i++){
	            if(count1[i]!=0){
	                flag = false;
	                break;
	            }
	        }
	    }
	    else{
	         int i;
	        for(i=0;i<mid;i++){
	            count1[str[i]-'a']++;
	        }
	        for(i=mid;i<len;i++){
	            count1[str[i]-'a']--;
	        }
	        for(int i=0;i<26;i++){
	            if(count1[i]!=0){
	                flag = false;
	                break;
	            }
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
