#include <iostream>

using namespace std;

int counter(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i ++) {
        if (arr[i] == 1) {
            count += 1; 
        }
    }
    return count;
}

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n] = {0};
    while (k --) {
        string s;
        cin >> s;
        if (s == "CLICK") {
            int a;
            cin >> a;
            if (arr[a - 1] == 1) {
                arr[a - 1] = 0;
            }
            else {
                arr[a - 1] = 1;
            }
            count = counter(arr, n);
        }
        else {
            for (int i = 0; i < n; i ++) {
                arr[i] = 0;
            }
            count = 0;
        }
        cout << count << endl;
    }
    return 0;
}