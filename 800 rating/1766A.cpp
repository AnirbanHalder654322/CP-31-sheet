#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        int count{0};
        while(n>10){
            n=n/10;
            count+=9;
        }
        count +=n;
        cout << count << endl;
    }
}