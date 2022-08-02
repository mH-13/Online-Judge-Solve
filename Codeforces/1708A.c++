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
        ll sum=0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
            sum += a;

        }
        int count =0;
        if(v[0]==1){cout<<"YES\n";}
        else{
            for(int i=n-1; i>0; i--){
                sum = sum-v[i];
                if(v[i]>sum && v[i]%sum == 0){count++;}
                else if(sum>v[i]&& v[i]>1 && sum%v[i]==0){count++;}
            }
            if(count == n-1){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
    }
}