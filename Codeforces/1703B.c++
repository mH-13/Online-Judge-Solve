#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        sort(s.begin(), s.end());
        int count = 1;
        for(int i=0; i<n-1; i++){
            if(s[i]!=s[i+1]){count++;}
        }
        int ans = count*2 + (n-count);
        cout<<ans<<endl;
    }
}