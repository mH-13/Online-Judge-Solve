#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int c=0;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i] != '?'){c++;}
        }
        if(c==0){
            s[1]='B';
        }
        
        //for the ith-nth "?" character in string
        for(int i=1; i<n; i++){
            if(s[i]=='?' && s[i-1] !='?'){
            //bitwise xor- will replace s[i] with the opposite of s[i+1]
                s[i]=s[i-1]^('B'^'R');
            }
        }
        
        //for the 0st-ith "?" character in string
        for(int i=n-1; i>=0; i--){
            if (s[i]=='?' && s[i+1]!='?'){
                s[i]=s[i+1]^('B'^'R');
            }
        }
        cout<<s<<endl;
    }
    return 0;
    }