#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        if((n==a || n== b)){
            if(a==b){
            cout << "YES" << endl;
             } else{
            cout << "NO" << endl;
        }
        continue;
    }
            if(n-(a+b)<=1)
                cout << "NO" << endl; 
            else
                cout << "YES" << endl;
        
       
        
    }
}


// 5 2 1
// 1 2 3 4 5 
// 1 2 4 3 5

// 6 2 4
//  