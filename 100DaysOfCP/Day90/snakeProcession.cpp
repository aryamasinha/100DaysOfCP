#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    for(int i=0; i<r; i++){
        int l;
        cin>>l;
        string s;
        cin>>s;

        int snake=0, valid=0;
        for(int i=0; i<l; i++){
            if(s[i]=='.'){
                continue;
            } else if (s[i]=='H'){
                snake++;
            }else
            snake--;
            if (snake !=0 && snake!=1){
                valid=-1;
                break;
            }
        }
        if(valid==0 && snake==0){
            cout<<"Valid\n";
        }
        else cout<<"Invalid\n";
    }
    return 0;
}
