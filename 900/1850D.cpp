#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n,k;
    cin >> n >> k;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    

    long long count{0},mx{0};
    for(long long i=1;i<n;i++){
        if(a[i]-a[i-1]<=k){
            count++;
            mx = max(count,mx);
        }else{
            count=0;
        }
    }
    cout << n-mx-1 << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}