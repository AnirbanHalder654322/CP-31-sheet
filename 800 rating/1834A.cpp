#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int p{0};
        int ne{0};
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1)
            p++;
            else
            ne++;
        }

        if(p>=ne){
            if(ne%2==0){
                cout << 0 << endl;
        }else{
                cout << 1 << endl;
         } continue;
        }else{
            
            int op{0};
            while(p<ne || ne %2 ==1){
                op++;
                p++;
                ne--;
            }

            cout << op << endl;
        
        }
        
        }

    }
 

// -1 -1 | ne = 2 | p = 0 | c = 2/2 = 1
// -1 -1 -1 1 | ne = 3 | p = 1 | c = 1