#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b;

        vector<long long> c;
    
        for(int i=0;i<n;i++){
        
            cin >> a[i];
        }
        long long mx= *max_element(a.begin(),a.end());
        

       for(auto e: a){
        if(e==mx)
        c.push_back(mx);
        else
        b.push_back(e);
       } 
        if(b.size()==0){
            cout << -1 << endl;
            
        }else{
            cout << b.size() << " " << c.size() << endl;
            for(auto it: b){
                cout << it << " ";
            }
            cout << endl;


            for(auto it: c){
                cout << it << " ";
            }
            cout << endl;
        }

        

    }
}