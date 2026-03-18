#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(int i=0;i<10;i++){ 
            if(i%2==0)
            {if((n+1)%3==0 || (n-1)%3==0){
                cout << "First" << endl;
                break;
            }else{
                n++;
            }
        
        }
            else{
                if(n%3==1){
                    n--;
                }
                else if(n%3==2){
                    n++;
                }else{
                    n++;
                }
            }
            if(i==9){
                cout << "Second" << endl;
            }
        }
    }
    
}