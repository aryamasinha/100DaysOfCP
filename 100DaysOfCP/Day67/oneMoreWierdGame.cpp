#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n,m,score = 0;
	    cin >> n >> m;
	    int a[n][m] = {0};
	    
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < m; j++){
	            a[i][j] = 1;
	            
	            if(a[i-1][j] == 1){
	                score++;
	            }
	            if(a[i][j-1] == 1){
	                score++;
	            }
	            if(a[i][j+1] == 1 ){
	                score++;
	            }
	            if(a[i+1][j] == 1 ){
	                score++;
	            }
	            
	        }
	    }
	    cout<<(n*(m-1))+((n-1)*m)<<endl;
	    
	}
	return 0;
}
