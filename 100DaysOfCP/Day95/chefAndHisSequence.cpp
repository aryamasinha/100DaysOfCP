#include <bits/stdc++.h>
using namespace std;

int main() {
long int t;
	cin>>t;
	while(t--)
	{
	  int n,m,i,j,count=0,x=0;
	  cin>>n;
	  int a[n];
	  for(i=0;i<n;i++)
	  {
	      cin>>a[i];
	  }
      cin>>m;
      int ar[m];
      for( j=0;j<m;j++)
      {
          cin>>ar[j];
      }
      for(i=0;i<n;i++)
      {
          if(a[i]==ar[x])
          {
              count++;
              x++;
          }
          
      }
      if(count==m)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
      
	}     
	return 0;
}
