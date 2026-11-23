#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

#define endl "\n"

vector<vector<bool>> pasture;
vector<vector<bool>> visited;
vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int R, C, res;

void bfs(int cx, int cy);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> R >> C;

  pasture = vector<vector<bool>>(R, vector<bool>(C));
  visited = vector<vector<bool>>(R, vector<bool>(C, false));

  for (int i = 0; i < R; i++) {
    string row;
 
    cin >> row;
 
    for (int j = 0; j < C; j++) {
      pasture[i][j] = row[j] == '#';
    }
  }

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (pasture[i][j] && !visited[i][j]) {
        bfs(i, j);
      }
    }
  }

  cout << res << endl;

  return 0;
}


void bfs(int cx, int cy){
  queue<pair<int, int>> q;

  q.push({cx, cy});
  visited[cx][cy] = true;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    
    for(pair<int, int> direction : directions){
      int nx = x + direction.first;
      int ny = y + direction.second;

      if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
      if (visited[nx][ny] || !pasture[nx][ny]) continue;

      q.push({nx, ny});
      visited[nx][ny] = true;
    }
    
    q.pop();
  }

  res++;
}

