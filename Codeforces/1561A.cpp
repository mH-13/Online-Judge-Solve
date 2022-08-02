#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector <int> v;
        vector <int> v2;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
            v2.push_back(a);
        }
        int c=0;
        int r=0;
        int k=0;
        sort(v2.begin(), v2.end());
        for(int j=1; j<n; j++){
            if(v==v2){break;}
            for(int i=0; i<n-1; i+=2){                
                if(v[i]>v[i+1]){
                    int tmp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = tmp;
                    r++;
                }
            }
            if(r>0){c++;}
            else{k++;}
            r=0;
            if(v==v2){break;}
            for(int i=1; i<n-1; i+=2){                
                if(v[i]>v[i+1]){
                    int tmp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = tmp;
                    r++;
                }
            }
            if(r>0){c++;}
            else{k++;}
            r=0;
            
        }
        cout<<c+k<<endl;
    }
    return 0;
}
