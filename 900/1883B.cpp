#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> m;
        if(n==1){
            cout << "YES" << endl;
        }else{
            // freq map
            for(auto c: s){
                m[c]++;
            }
            
           int even{0};
           int odd{0};
           for(auto &[k,v]: m){
            if(v%2==0){
                even++;
            }else{
                odd++;
            }
           }
           
           if(odd-k <=1){
            cout << "YES" << endl;            
           }else{
            cout << "NO" << endl;
           }
        }
    }
}