#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n&1){
            cout << 1 << endl;
        }else{
           int count{1};
        
            for(long long p=2; n%p==0 && p<=n; p++){
            count++;
           } 
           cout << count << endl;
        }


    }
}