#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int m= (n/2) + 1;
        m = s/m;
        cout<<m<<endl;
    }
}