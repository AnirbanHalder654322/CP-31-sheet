#include <bits/stdc++.h>

using namespace std;
vector<vector<char>> mat(10,vector<char>(10));

int main(){

    int t;
    cin >> t;

    while(t--){
        vector<pair<int,int>> ar;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> mat[i][j];
                if(mat[i][j]=='X')
                ar.push_back({i,j});
            }
        }
        int score{0};
        for(auto [x,y]: ar){
            int k = 5;
            for(int i=0;i<k;i++){
                if((x==i && y<=(9-i))|| (y==i && x<=(9-i)) || (x==(9-i) && y<=(9-i))|| (y==(9-i) && x<=(9-i))){
                    score+=(i+1);
                    break;
                }
            }
            

        }
        cout << score << endl;
    }
}