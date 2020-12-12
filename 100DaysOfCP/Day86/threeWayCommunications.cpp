#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int r,count=0;
int ab,bc,ac;
	int x1,y1,x2,y2,x3,y3;
	cin>>r;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	ab=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	bc=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	ac=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
	if(ac<=r*r)
	count++;
	if(ab<=r*r)
	count++;
	if(bc<=r*r)
	count++;
	if(count>=2)
	cout<<"yes";
	else
	cout<<"no";
	cout<<endl;
}
	return 0;
}
