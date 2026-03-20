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
        pair<int,int> diff = make_pair(INT_MAX,0);
        bool flag{true};
        int count =INT_MAX;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                count = min(count,1);
                flag = false;
            }else
            if(a[i]<a[i-1]){
                cout << 0 << endl;
                flag = false;
                goto endloop;
            }
            else{
                if(a[i] - a[i-1] < diff.first){
                    diff = {a[i]- a[i-1], i};
                }
            }
        }
        
        if(flag){
        count = (a[diff.second] - a[diff.second-1] )/2 + 1;
        }
        cout << count << endl;

        endloop:
        continue;
        
    }
}