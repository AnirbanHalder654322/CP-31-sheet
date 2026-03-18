#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        

        if(n<=2){
            cout << "YES"<< endl;
            continue;
        }

        if(a.size()==mp.size()){
            cout << "NO" << endl;
            continue;
        }
        if(mp.size()==1){
            cout << "YES" << endl;
            continue;
        }
        if(mp.size()==2){
            auto it {mp.begin()};
            if(abs(it->second - next(it)->second) <= 1){
            cout << "YES" << endl;
            continue;
            }
        }

    
        
            cout << "NO" << endl;

    }
}