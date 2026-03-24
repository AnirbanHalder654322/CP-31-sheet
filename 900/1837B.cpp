#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;

        int ans=1;
        int cons = 1;
        
        for(int i=1;i<n;i++){
            if(a[i] == a[i-1]){
                cons++;
            }else{
                cons=1;
            }
            ans = max(ans,cons);
        }

        cout << ans+1 << endl;
        



        
    }
}



/// 5  >>><<
/// 5 4 3 2 3 5