#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,k;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>k;
        for(int j=1; ;j++){
            if(j%3==0 || j%10 ==3){
                continue;
            }
            k--;
            if(k==0){
                cout<<j<<endl;
                break;
            }
        }
    }
}