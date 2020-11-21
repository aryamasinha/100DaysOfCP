#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	
	cin>>n;
	
	int max=-1,temp,winner;
		
	int play1[n],play2[n];
	
	for(int i=0;i<n;i++) {
		cin>>play1[i]>>play2[i];
		
		if(i!=0) {
			play1[i]=play1[i]+play1[i-1];
			play2[i]=play2[i]+play2[i-1];
		}
		
	}
	
	for(int i=0;i<n;i++) {
		
		temp=play1[i]-play2[i];
		if(temp<0)
			temp*=(-1);
		
		if(temp>max) {
			max=temp;
			winner=i;
		}
			
	}
	
	if(play1[winner]>play2[winner])
		cout<<"1 "<<max;
	else 
		cout<<"2 "<<max;
	
	return 0;
}