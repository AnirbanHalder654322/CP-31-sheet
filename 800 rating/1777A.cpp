#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        int p{0};
        for(int i=0;i<n;i++){
        
        cin >> a[i];
        a[i] = a[i]%2;
    }
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int right{n-1};
        int count {0};
        while(right>0){
            if(a[right]%2==a[right-1]%2){
                a[right-1] = a[right] * a[right-1];
                count++;
            }
            right--;
        }
        cout << count << endl;
        

    }
}