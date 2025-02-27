#include <utility>
#include <iostream>
#include <queue>

using namespace std;

int board[502][502];
bool visited[502][502];

int n, m; // 가로 세로

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// x가 행을, y가 열을 의미한다.

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> q;

    visited[0][0] = 1;
    q.push({0, 0});

    while(!q.empty()){
        pair<int, int> current = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = current.first + dx[i];
            int ny = current.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m){
                continue;
            }
            if(visited[nx][ny] || board[nx][ny] != 1){
                continue;
            }
            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}