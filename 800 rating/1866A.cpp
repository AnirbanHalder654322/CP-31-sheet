#include <bits/stdc++.h>

using namespace std;

int main(){
        int n;
    cin >> n;
    int k;
        int m{INT_MAX};
        for(int i=0;i<n;i++){
            cin >> k;
            m= min(abs(m),abs(k)); 
        }
        cout << m << endl;

    }