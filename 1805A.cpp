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

        
        int tx { a[0]};
        for(int i=1; i<n;i++){
            tx = tx ^ a[i];
        }
        if(n%2==0){
            if(tx==0)
            tx=0;
            else
            tx = -1;
        }
        cout << tx << endl;
        
        
        

    }

}