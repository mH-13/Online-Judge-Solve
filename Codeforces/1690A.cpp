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
        int x=0,y=0,z=0;
        for(int x=3; x<n; x++){
            z = (n-x) / 2;
            y = n-x-z;
            if(z>1 && y+1<x){
                z--;
                y++;
            }
            if(x>y && y>z){
                cout<<y<<" "<<x<<" "<<z<<"\n";
                break;
            }
        }
    }
    return 0;
}

