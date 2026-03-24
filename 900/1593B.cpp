#include <bits/stdc++.h>

using namespace std;


const string seq []= {"00", "25", "50","75"};


int solve(string &s, string &t){
    int sp = s.length()-1;


    int ans = 0;
    while(sp>=0 && s[sp]!=t[1]){
        sp--;
        ans++;
    }

    if(sp<0) return 100;

    sp--;
    while ( sp>=0 && s[sp]!=t[0]){
        sp--;
        ans++;

    }
    
    return sp<0? 100 :ans;
    

}
int main(){
    int t;
    cin >> t;
    while(t--){
    string n;
    cin >> n;
    int ans = 100;
    for(auto v: seq){
        ans = min(ans, solve(n,v));
    }    

    cout << ans << endl;

    }
    
    
}