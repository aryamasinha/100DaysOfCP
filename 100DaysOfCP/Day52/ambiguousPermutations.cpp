#include <iostream>
using namespace std;

bool check_ambiguity(int *arr, int *arr_new, int n) {
    bool ambiguous = false;
    for(int i=0;i<n;i++) {
        if(arr[i] != arr_new[i]) {
            return false;
        }
    }
    return true;
}

int main() {
	int n;
	int x;
	bool ambiguous;
	cin>>n;
	while(n!=0) {
	    int arr[n];
	    int arr_new[n];
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	        arr_new[arr[i]-1] = i+1;
	    }
	    ambiguous = check_ambiguity(arr, arr_new, n);
	    if(ambiguous) {
	        cout<<"ambiguous"<<endl;
	    }
	    else{
	        cout<<"not ambiguous"<<endl;
	    }
	    cin>>n;
	}
	return 0;
}
