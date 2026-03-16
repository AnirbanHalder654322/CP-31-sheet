#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int cm{0};
        int lm{0};
        if(b>d){
            cout << -1 << endl;
            continue;
        }else{
            cm = d-b;
            if(a+cm-c>0){
                lm = a + cm - c;
            }
        
            
        }

        if((a+cm-lm==c) && (b+cm == d)) 
        cout << cm + lm << endl;
        else
        cout << -1 << endl;
    
    }
}