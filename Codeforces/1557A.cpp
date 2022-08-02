#include <bits/stdc++.h>
using namespace std;

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
        sort(v.begin(), v.end());
        double a1 = v[n-1]/double(1);
        double a2 =0; 
        for(int i= 0; i<n-1; i++){
            a2 += v[i];
        }
        a2 = a2/double(n-1);
        double ans = a1+a2;
        cout<<fixed;
        cout<<setprecision(9);
        cout<<ans<<"\n";
    }
    return 0;
}