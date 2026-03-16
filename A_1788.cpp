#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum{0};
        vector<long long> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
            if(a[i]==2)
            sum++;
             
        }
        long long left_sum {0};
        for(int i=0;i<n;i++){
            if(a[i]==2){
            left_sum+=1;
            sum-=1;
            }
            if(left_sum==sum){
            cout << i+1 << endl;
            goto endloop;
            }
        }
        cout << -1 << endl;


        endloop:
        continue;
        
    }   
}