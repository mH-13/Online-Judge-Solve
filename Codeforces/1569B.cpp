#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector <int> vec;
        // create a vector using index of winner
        for(int i=0; i<n; i++){
            if(s[i] =='2'){
                vec.push_back(i);
            }
        }
        string arra[n][n];

        // create a basic matrix using multidimentional array with X & =
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){arra[i][j]="X";}
                else{arra[i][j]="=";}
            }
        }

        //check if it possible to fullfill all player wish
        if(vec.size()==1 || vec.size()== 2){cout<<"NO\n";}
        
        // make everyone type 2 player winner against another player
        // last player will win a match against 0th player
        else{
            cout<<"YES\n";
            for(int i=0; i<vec.size(); i++){
                if(i != vec.size() - 1){
                    arra[vec[i]][vec[i+1]] = "+";
                    arra[vec[i+1]][vec[i]] = "-";
                }else{
                    arra[vec[i]][vec[0]] = "+";
                    arra[vec[0]][vec[i]] = "-";
                    
                }
                
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<arra[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}