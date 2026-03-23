#include <bits/stdc++.h>

using namespace std;
 
bool solve(){
    
    string s;
    cin >> s;
 bool alice = true;    
 int flag =0; 
    while(1){
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            s.erase(i,2);
            flag=1;
            break;
        } 
    
    }
    if(flag==0)
    return alice;
    else{
    alice = !alice;
    flag=0;
    }
    if(s.size()<2)
    return alice;
   }

}
int main(){
   int t;
   cin >> t;
   while(t--){
        if(solve())
        cout << "NET" << endl;
        else
        cout << "DA" << endl;
 
}
}