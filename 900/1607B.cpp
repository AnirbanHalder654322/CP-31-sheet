#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x,n;
    cin >> x >> n;
    long long arr[]= {0,-n,1,n+1};
    if(x&1)
    cout << x-arr[n%4] << endl;
    else
    cout << x+arr[n%4] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}