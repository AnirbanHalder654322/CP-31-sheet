#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        long long xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<pair<long long, long long>> moves = { {a,b},{a,-b},{-a,b}, {-a,-b}, {b,a}, {b,-a}, {-b,a}, {-b,-a}};
        int count =0;
        set<pair<long long, long long>> s;
        for(auto &[x1,y1]: moves){
            int x = xk+x1;
            int y = yk+y1;
            for(auto &[x2,y2]: moves){
                int xH = x +x2;
                int yH = y+y2; 
                if(xH == xq && yH ==yq ){
                    
                    s.insert({x,y});
                }
                
            }
        } 
        
        cout << s.size() << endl;
    }
}