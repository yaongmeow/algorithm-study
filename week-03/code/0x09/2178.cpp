#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>

using namespace std;

int board[100][100];
int dis [100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 100; i++){
        fill(dis[i], dis[i] + 100, -1);
    }

    int n, m;
    cin >> n >> m;
    cin.ignore();

    for(int i = 0 ; i < n; i++){
        string input;
        getline(cin, input);
        for(int j = 0; j < input.length(); j++){
            if(input[j] == '0') board[i][j] = 0;
            else if(input[j] == '1') board[i][j] = 1;
        }
    }

    queue<pair<int, int>> q;

    q.push({0, 0});
    dis[0][0] = 0;

    while(!q.empty()){
        pair<int, int> cur = q.front(); q.pop();
        int curDis = dis[cur.first][cur.second];

        int route = 0;
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(dis[nx][ny] != -1 || board[nx][ny] != 1) continue;
            q.push({nx, ny});
            dis[nx][ny] = curDis + 1;
        }
    }
    cout << dis[n-1][m-1] + 1;
}