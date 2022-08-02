#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set <int> s;
        for(int i =2 ; i<=n/2; i++){
            ll p1 = pow(i,2);
            ll p2 = pow(i,3);
            if(p1 <= n){s.insert(p1);}
            if(p2 <= n){s.insert(p2);}
            if(p1 > n){
                break;
            }
        }
        int count = s.size()+1;
        cout<<count<<endl;
    }
    return 0;
}