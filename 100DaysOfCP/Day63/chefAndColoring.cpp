#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    char s[n+1];
	    cin>>s;
	    long long int g=0,r=0,b=0;
	    for(long long int i=0;i<n;i++){
	        if(s[i]=='R')
	            r++;
            else{
                if(s[i]=='G')
                    g++;
                else
                    b++;
            }
	    }
	    int max;
        if(r>=g){
            if(r>=b){
                max=r;
            }
            else{
                max=b;
            }
        }
        else{
            if(g>=b){
                max=g;
            }
            else{
                max=b;
            }
        }
        cout<<n-max<<endl;
	}
	return 0;
}
