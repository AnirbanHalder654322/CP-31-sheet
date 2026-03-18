#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        map<int,int> m;
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            m[a[i]]++;
        }
        if(m.find(k) != m.end()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}