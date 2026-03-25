#include <bits/stdc++.h>

using namespace std;
long long n,a[200005],q,sum=0, pref[200005],t;

void solve(){
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum+=a[i];
        pref[i] = pref[i-1]+a[i];
    }
    
    
    for(int i=0;i<q;i++){
        long long l,r,k;
        cin >> l >> r >> k;
        long long ans = pref[n] - (pref[r]-pref[l-1] + k*(l-r+1));

        if(ans & 1)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

    }
    
}



int main(){
    cin >> t;
    while(t--){
        solve();
    }
}