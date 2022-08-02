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
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector <pair<int, string>> vs;
        for(int i=0; i<n; i++){
            int x;
            string y;
            cin>>x>>y;
            vs.push_back(make_pair(x,y));
        }
        vector <int> v2;
        int u =0;
        int d =0;

        for(int i=0; i<n; i++){
            for(int j=0; j<vs[i].first; j++){
                if(vs[i].second[j] == 'D'){
                    v[i] += 1;
                }else{
                    v[i] -= 1;
                }
            }
            if(v[i]>9){
                v[i] = v[i]- 9 -1;
            }else if(v[i]<0){
                v[i]= 10- abs(v[i]);
            }
            
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}