# [벽 부수고 이동하기](https://www.acmicpc.net/problem/2206)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   2 초    |   192 MB    | 63922 | 16002 |   9858    |  22.780%  |

</div>

### 문제

N×M의 행렬로 표현되는 맵이 있다. 맵에서 0은 이동할 수 있는 곳을 나타내고, 1은 이동할 수 없는 벽이 있는 곳을 나타낸다. 당신은 (1, 1)에서 (N, M)의 위치까지 이동하려 하는데, 이때 최단 경로로 이동하려 한다. 최단경로는 맵에서 가장 적은 개수의 칸을 지나는 경로를 말하는데, 이때 시작하는 칸과 끝나는 칸도 포함해서 센다.

만약에 이동하는 도중에 한 개의 벽을 부수고 이동하는 것이 좀 더 경로가 짧아진다면, 벽을 한 개 까지 부수고 이동하여도 된다.

한 칸에서 이동할 수 있는 칸은 상하좌우로 인접한 칸이다.

맵이 주어졌을 때, 최단 경로를 구해 내는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 N(1 ≤ N ≤ 1,000), M(1 ≤ M ≤ 1,000)이 주어진다. 다음 N개의 줄에 M개의 숫자로 맵이 주어진다. (1, 1)과 (N, M)은 항상 0이라고 가정하자.

---

### 출력

첫째 줄에 최단 거리를 출력한다. 불가능할 때는 -1을 출력한다.

---

### 예제 입력

|                        예제 입력1                         | 예제 출력1 |
| :-------------------------------------------------------: | :--------: |
| 6 4<br/>0100<br/>1110<br/>1000<br/>0000<br/>0111<br/>0000 |     15     |

|               예제 입력2                | 예제 출력2 |
| :-------------------------------------: | :--------: |
| 4 4<br/>0111<br/>1111<br/>1111<br/>1110 |     -1     |

---

### 문제 접근

  - `BFS`로 해결

  - 일반적인 `BFS`와 달리 3차원 `visited` 벡터 선언

    - `visited[x][y][block]`: block - 벽을 부순 상태인지 아직 부수지 않은 상태인지 표기

  - `queue`도 2차원 pair 로 선언

    - `queue<pair<pair<int,int>, int>>`

    - `q.front().first.first`: x 좌표

    - `q.front().first.second`: y 좌표

    - `q.front().second`: 벽을 부순 상태인지 아닌지에 대한 상태값

  - `0,0`부터 시작하면서 벽을 부수지 않은 상태이고 다음 좌표가 벽이라면, `block - 1`

  - 다음 좌표가 벽이 아니라면 이전 `block`값을 계속 가지게 됨

  - 다음 칸이 벽이고 벽을 부순 상태라면 이후 벽을 부수지 않음

  - `N-1, M-1`에 도달한 경우 최단 거리를 출력, 도달하지 못하고 `queue`가 비어 끝난 경우에는 도달하지 못한 경우이므로 `-1` 출력