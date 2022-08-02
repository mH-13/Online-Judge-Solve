#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int sum=0;
        int j=0, o=0;
        for(int i=0; i<n; i++){
            if(s[i]!='0'){j=i;break;}
        }
        for(int i=j; i<n; i++){
            if(s[i]!='0'){
                int x = s[i]-'0';
                sum += x;
                c++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){o++;}
            else{break;}
        }
        if(c==0){cout<<c<<endl;}
        else{
            if(o==0){c-=1;}
            int ans = sum+c;
            cout<<ans<<endl;
        }
    }   
    return 0;
}