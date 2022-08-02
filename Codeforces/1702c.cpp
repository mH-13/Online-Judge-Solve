#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string blank;
        getline(cin, blank); // to take input of a blankline
        int n,k;
        cin>>n>>k;

        //need a map to keep the record of the values index
        map <int, pair<int, int>> m;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            //if it is already in map then just update the second value;
            // if it is not in map then the 1st and 2nd value will be the same index
            if(!m.count(a)){
                m[a].first =i;
                m[a].second = i;
            }else{m[a].second =i;}
        }
        for(int i=0; i<k; i++){
            int j1,j2;
            cin>>j1>>j2;
            if(!m.count(j1) or !m.count(j2) or m[j1].first > m[j2].second){
                cout<<"NO\n";
            }
            else{cout<<"YES\n";}
        }
    }
    return 0;
}

