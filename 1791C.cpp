#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
            int l=0;
            int r=n-1;
          
            while(l<=r){
           if((s[r]=='0' && s[l]=='1' )||( s[r]=='1' && s[l]=='0')){
                r--;
                l++;
            }
            else{
                break;
            }
        } 
        cout << r-l+1 << endl;
    }
}

        