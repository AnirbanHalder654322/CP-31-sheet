#include <bits/stdc++.h>


using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int count =2*n;
    
    for(int i=0;i<n && count >=0;i++){
        if(a[i]==1){
            count--;
            a[i]+=1;
        }

    }
    
    for(int i=0;i<n-1  && count >=0;i++){
        if(a[i+1]%a[i]==0){
            a[i+1]++;
            count --;
        }
    }

        
    
    for(auto s: a){
        cout << s << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}