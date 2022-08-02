#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        ll c=0;
        ll cn=0;
        for(int i=0; i<n-1; i++){
            if(v[i]!=0){
                c+=v[i];
            }
            else{
                if(c>=1){
                    cn++;
                }
            }
        }
        ll ans = cn+c;
        cout<<ans<<endl;
    }
}