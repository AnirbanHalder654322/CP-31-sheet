#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cc{0};
        bool flag{false};
        int count {0};
        for(int i =0; i<n;i++){
            if(s[i] == '.'){
                cc +=1;
                count+=1;
            }else{
                cc=0;
            }
            if(cc ==3){
                flag = true;
                break;
            }
        }
        if (flag)
            cout << 2 << endl;
        else
            cout << count << endl;
    }
}