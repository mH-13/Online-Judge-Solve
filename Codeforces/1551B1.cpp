#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map <char, int> m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++; //accesing the key and add +1 to its value
        }

        //for printing key & value
        // for(auto x:m ){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        int c1=0,c2=0;
        for(auto x:m){
            if(x.second==1){c1++;}
            else{c2++;}
        }
        int ans = c2 + c1/2;
        cout<<ans<<"\n";
    }
    return 0;
}