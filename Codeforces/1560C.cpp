#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double x = ceil(sqrt(n)); //ceil the value to find row/colum
        int h = pow(x,2); // highest value of that reverse L shaped row column
        int l = pow(x-1,2)+1; // lowes value of that reverse L shaped row column
        int m = (h+l) / 2; // mid value
        int r=0; 
        int c=0;

        //check if n if greater than or less than mid value
        if(n<m){
            c = x;
            r = (n-l)+1;
        }
        else if(n>m){
            r = x;
            c = (h-n)+1;
        }
        else{
            r=x;
            c=x;
        }
        cout<<r<<" "<<c<<"\n";
    }
    return 0;
}