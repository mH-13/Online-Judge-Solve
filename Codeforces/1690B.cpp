#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v1;
        vector <int> v2;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v2.push_back(a);
        }
        int m = v1[0]-v2[0];
        for(int i=0; i<n; i++){
            int p = v1[i] - v2[i];
            m = max(m, p);
        }
        if(m<0){cout<<"NO\n";}
        else{
            int c=0;
            for(int i=0; i<n ;i++){
                if(v1[i]-v2[i]==m){
                    c++;
                }
                if(v1[i]-v2[i]<m && v2[i]==0){
                    c+=1;
                }
            }
            if(c==n){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
    }
    return 0;
}


