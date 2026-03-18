#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        if(n%2==0){
            cout << "YES" << endl;
            goto endloop;
        }
        else if(n%k==0){
            cout << "YES" << endl;
            goto endloop;
        }
        else if((n%k)%2==0){
            cout << "YES" << endl;
            goto endloop;
        }else if((n-k)%2==0){
            cout << "YES" << endl;
            goto endloop;
        }       
        cout << "NO" << endl;

    endloop:
    continue;

    }
}