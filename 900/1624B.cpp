#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
   
    int aP = b-(c-b);
    if(aP>=a && aP%a ==0 && aP!=0){
        cout << "YES" << endl;
        return ;
    }

    

    int bP = c-(c-a)/2;
    if(bP>=b && (c-a)%2==0 && bP%b==0 && bP!=0){
        cout << "YES" << endl;
        return ;

    }
    

    int cP = b+(b-a);
    if(cP >=c && cP%c==0 && cP!=0){
        cout << "YES" << endl;
        return ;
    }
    cout << "NO" << endl;

}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        
       
        
    }
}