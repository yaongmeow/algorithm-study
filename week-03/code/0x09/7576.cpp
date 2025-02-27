#include<iostream>
#include<queue>
using namespace std;

int box[1000][1000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    int leftToamato = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> box[i][j];
            if(box[i][j] == 0) leftToamato++;
        }
    }

    int dayCnt = 0;

    while(leftToamato > 0){
        
    }






}