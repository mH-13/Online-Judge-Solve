#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0){
            int c1 = n/3;
            int c2 = n/3;
            cout<<c1<< " "<<c2<<"\n";
        }else{
            int c1 = n/3;
            int c2 = c1+1;
            if(c1*1+ c2*2 == n){
            cout<<c1<<" "<<c2<<"\n";
            }else{
                cout<<c2<<" "<<c1<<"\n";
            }
        }
    }
    return 0;
}