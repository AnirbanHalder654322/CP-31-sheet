#include <bits/stdc++.h>


using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    pair<int,int> mx,mn;
    // val, idx
    mx = {a[0],0};
    mn = {a[0],0};
    int smx = 0;
    for(int i=1;i<n;i++){
        if(a[i]>mx.first)
        mx={a[i],i};
        if(a[i]<mn.first)
        mn={a[i],i};
        
        smx = max(smx, a[i-1]-a[i]);

    }
    int d1 = mx.first - a[0];
    int d2 = a[n-1] - mn.first;
    int d3 = a[n-1] - a[0];
    vector<int> b = { d1,d2,d3,smx};

    cout << *max_element(b.begin(), b.end()) << endl;
    
}

int main(){
int t;
cin >> t;
while(t--){
    solve();
}
}