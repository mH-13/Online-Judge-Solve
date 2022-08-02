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
        int count =0;
        int mn = v[0];
        for(int i=0; i<n; i++){
            if((v[i]+mn)/2<v[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}