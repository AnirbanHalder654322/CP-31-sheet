#include <bits/stdc++.h>

using namespace std;


void solve(){
            int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long count{0};
        for(int i=n-1;i>0;i--){
            while(a[i-1] >=a[i] && a[i-1]>0){
                a[i-1]/=2;
                count++;
            }
            if(a[i-1]==a[i]){
            cout << -1 << endl;
            return;
            }
        }
        

        cout << count << endl;    
    
 
}

int main(){
    int t;
    cin >> t;
    while(t--){
            solve();
   }
}

