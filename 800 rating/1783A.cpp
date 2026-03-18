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
    if(n==1){
        cout << "YES";
        continue;
    }
    int ps{a[0]};
    map<int,int> s;
    int mf{0};
    for(auto i: a){
        s[i]++;
        mf=max(mf,s[i]);
    }
    if(s.size() == 1){
        cout << "NO" << endl;
        continue;
    }
    if(a.size()== s.size()){
        cout << "YES" << endl;
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
            continue; 
        }
        
        cout << endl;

    }else{
        bool flag{true};
        for(int i=1;i<n;i++){
            if(a[i]==ps){
            flag= true;
            break;
        }
            ps+=a[i];
        }
            
        if(!flag){
            for(auto e: a){
                cout << e << " ";
            }
            cout << endl;
                continue;
        }
        int idx{0};
        cout << "YES" << endl;
        for(int i=1; i<=mf;++i){
            for(auto p = s.rbegin(); p!=s.rend(); ++p){
                if(p->second>=i){
                        cout << p->first << " ";
                }
            }
        }
        cout << endl;
}

    }
}