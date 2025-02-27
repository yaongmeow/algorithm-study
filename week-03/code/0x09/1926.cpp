#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int dfs(int **arr, bool **vis, int n, int m, pair<int, int> start){
    int res = 1;
    queue<pair<int, int>> q;
    vis[start.first][start.second] = 1;
    q.push({start.first, start.second});

    while (!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(vis[nx][ny] || arr[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            q.push({nx, ny});
            res++;
        }
    }

    return res;
}

int main(){
    int n, m;

    cin >> n >> m;

    int** arr = new int*[n];
    bool** vis = new bool*[n];

    for(int i = 0; i < n; i++){
        arr[i] = new int[m];
        vis[i] = new bool[m];
        fill(vis[i], vis[i] + m, false);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int max = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] && arr[i][j] == 1){
                cnt++;
                int res = dfs(arr, vis, n, m, {i, j});
                if (res > max) max = res;
            } else continue;
        }
    }
    cout << cnt << "\n" << max;
}