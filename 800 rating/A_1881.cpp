#include <bits/stdc++.h>

using namespace std;

bool check(string,string);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        
        string x,s;
        cin >> x >> s;
        if(!check(x,s)){
            cout << -1 << endl;
        }
    }
}

bool check(string x,string s){

        int count{0};
         while(x.length()<=50){
            if(x.find(s)!=string::npos){
                cout << count << endl;
                return true;
            }
            x+=x;
            count++;
        }
        
   return false; 

}