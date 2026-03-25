#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        double x;
        cin >> n >> x;
        vector<double> a(n);
        long long mx =0;
        long long mn = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mx += ceil(a[i]/x);
            mn += static_cast<long long>(a[i]);
        }
        mn = static_cast<long long>(ceil(mn/x));

        cout << mn << " " << mx << endl;

        

        
    }
}