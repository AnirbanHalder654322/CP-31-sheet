#include <bits/stdc++.h>

using namespace std;


void solve(){
     int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        pair<int,int> min = {a[0],0};
        for(int i=1; i<n;i++){
            for(int j=i+1; j<n;j++){
                if(a[i]> a[j] && a[i] > a[min.second]){
                    cout << "YES" << endl;
                    cout << (min.second+1) << " " << (i+1) << " " << (j+1) << endl;
                return;
                }
            }
        if(a[i]<min.first){
            min = {a[i], i};
        }
        }
    cout << "NO" << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
           }
}