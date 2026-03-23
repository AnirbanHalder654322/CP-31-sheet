#include<bits/stdc++.h>

using namespace std;
 

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long c2 = 0;
        while(n%2==0){
            n/=2;
            c2++;
        }
        long long c3{0};
        while(n%3==0){
            n/=3;
            c3++;
        }
        
        if(n!=1){
            cout << -1 << endl;
        }else{
            if(c3>=c2){
                cout << (c3-c2) + c3 << endl;
            }else{
                cout << -1 << endl;
            }
        }

        
    }
}