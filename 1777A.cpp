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
        if(a[i]%2==0)
            a[i]=0;
        else
            a[i]=1;
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