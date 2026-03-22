#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        if(x%2){
           cout << "4" << endl;
           cout << "1 " << n-1 << endl;
           cout << "1 " << n-1 << endl; 
           cout << n-1 << " " << n << endl;
           cout << n-1 << " " << n << endl;
        
        }
        else{
            cout << "2" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }      

    }
}


//1 2 3 4 5

// 001 xor 010 = 010 xor 011 =  001 xor 100 = 110 
// 6  6 6 6 5
// 0 0 0 0 5
// 0 0 0 5 5 
// 0 0 0 0 0 