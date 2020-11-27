#include <bits/stdc++.h>
using namespace std;

int main(){
    string vocab;
    cin>>vocab;
    int n;
    cin>>n;
    unordered_set<char> st;
    for(int i=0;i<vocab.length();i++){
        st.insert(vocab[i]);
    }
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    bool flag;
    for(int i=0;i<n;i++){
        flag = true;
        for(int j=0;j<words[i].length();j++){
            if(st.find(words[i][j]) == st.end()){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
