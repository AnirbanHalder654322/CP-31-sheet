#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a  >> b >> n;
        vector<long long> x(n);
        for(int i=0;i<n;i++){
            cin >> x[i];
        }
       
        
       long long t = b;
       
       for(auto s:x){
        if(s>=a)
        t+=(a-1);
        else
        t+=s;
       }
       
        cout << t << endl;
        
    }
}