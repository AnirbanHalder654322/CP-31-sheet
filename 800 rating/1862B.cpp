#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        vector<int> ans;
        ans.push_back(a[0]);
        int diff{0};
        for(int i=1;i<n;i++){
            diff = a[i] - a[i-1];
            if(diff>1 && (a[i-1] -1) > 0){
                
                ans.push_back(a[i-1]-1);
            }
            if(diff < 0){
                ans.push_back(a[i]);
            }
            
            ans.push_back(a[i]);
        }
        cout << ans.size() << endl;
        for(auto s: ans){
            cout << s << " ";
        }
        cout << endl;

    }
}