#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long size = n*k;
        vector<int> a(size);
        for(int i=0;i<size;i++){
            cin >> a[i];
        }
        


        long long sum{0} ;
        if(n==2){
            for(int i=0;i<size;i+=2){
                sum+=a[i];
            }    
        }else{

        long long boundary;
        if(n&1)
        boundary=n/2;
        else
        boundary=n/2-1;
        
        long long incr = n-boundary;

        long long start = (boundary)*k;
        for(long long i = start;i<size;i+=incr){
            sum+=a[i];

        }
        
    }
        cout << sum << endl;
        


        
    }
}