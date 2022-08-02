#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c,d;
        cin>>c>>d;
        int sum = a+b+c+d;
        if(sum==0){cout<<0<<"\n";}
        else if(sum==1 ||sum==2 || sum==3){cout<<1<<"\n";}
        else{cout<<2<<"\n";}


    }
}