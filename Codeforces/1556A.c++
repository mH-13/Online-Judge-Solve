#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c,d;
        cin>>c>>d;
        if(c==d && c!=0){cout<<1<<"\n";}
        else if(c==d && c==0){cout<<0<<"\n";}
        else{
            if(abs(c-d)%2==0){
                cout<<2<<"\n";
            }
            else{cout<<-1<<"\n";}
        }
    }
}