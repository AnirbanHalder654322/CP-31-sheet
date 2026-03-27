#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int res =0;
    for(int i=1;i<=n;i++){
        res = __gcd(res,abs(a[i]-i));
    }

    cout << res << endl;
    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}