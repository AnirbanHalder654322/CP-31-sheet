#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        int md {a[0]};
        for(int i=1;i<n;i++){
            md = max(md,a[i]-a[i-1]);
        }
        md = max(md, 2*(x-a[n-1]));
        cout << md << endl;
    }
}