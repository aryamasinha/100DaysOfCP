#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    int rev=0;
	    int temp=num;
	    while(temp!=0){
	        rev=rev*10+(temp%10);
	        temp/=10;
	    }
	    if(rev==num)
	        cout<<"wins"<<endl;
	    else
	        cout<<"loses"<<endl;
	}
	return 0;
}
