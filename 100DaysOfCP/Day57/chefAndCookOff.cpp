#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	for(int i=0; i<T; i++)
	{
	    int A[5];
	    int sum = 0;
	    for(int j=0; j<5; j++)
	    {
	        cin>>A[j];
	        sum+=A[j];
	    }
	    switch(sum)
	    {
	        case 0:
	        cout<<"Beginner"<<endl;
	        break;
	        
	        case 1:
	        cout<<"Junior Developer"<<endl;
	        break;
	        
	        case 2:
	        cout<<"Middle Developer"<<endl;
	        break;
	        
	        case 3:
	        cout<<"Senior Developer"<<endl;
	        break;
	        
	        case 4:
	        cout<<"Hacker"<<endl;
	        break;
	        
	        case 5:
	        cout<<"Jeff Dean"<<endl;
	        break;
	    }
	    
	}
	return 0;
}
