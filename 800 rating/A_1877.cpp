#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int t;
        int sum {0};
        for(int i=0;i<n-1;i++){
            cin >> t;
           sum +=t;
        }
        cout << (sum*-1) << endl; 



    }
}