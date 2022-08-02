#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector <int> vec;
        for(int i=0; i<3; i++){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        if(vec[0]+ vec[1]==vec[2]){cout<<"YES\n";}
        else if(vec[0]==vec[1] && vec[2]%2==0 && vec[2]>1){cout<<"YES\n";}
        else if(vec[1]==vec[2] && vec[0]%2==0 && vec[0]>1){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}