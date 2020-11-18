
#include<bits/stdc++.h> 
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    float quantity, price;
	    cin>>quantity>>price;
	    double total = quantity*price;
	    if(quantity>1000)
	    {
	        total = total - (total/10);
	    }
	    cout<<fixed<<setprecision(6)<<total<<endl;
	}
	return 0;
}