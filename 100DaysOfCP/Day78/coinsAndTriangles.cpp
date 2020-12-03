#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    int i=1;
	    int r=0;
	    while(n>=0){
	        n=n-i;
	        if(n>=0){
	            r++;
	            i++;
	        }
	        
	    }
	    std::cout << r << std::endl;
	}
	return 0;
}
