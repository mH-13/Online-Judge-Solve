#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0;
        int r=0;
        for(int i=0; i<n; i++){
            int a =0;
            int b=0;
            for(int j=i; j<n; j++){
                if(s[j]=='a'){a++;}
                else if(s[j]=='b'){b++;}
                if(a==b){
                    l = i+1;
                    r = j+1;
                    break;
                }
            }
            if(l>=1){break;}
        }
        if(l==0){cout<<-1<<" "<<-1<<"\n";}
        else{cout<<l<<" "<<r<<"\n";}
    }
    return 0;
}