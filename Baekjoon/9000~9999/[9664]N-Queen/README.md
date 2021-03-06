# [N-Queen](https://www.acmicpc.net/problem/9663)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 10 초     | 128 MB      | 47625 | 24709 | 16173     | 51.307%   |

</div>

### 문제

N-Queen 문제는 크기가 N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제이다.

N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 N이 주어진다. (1 ≤ N < 15)

---

### 출력

첫째 줄에 퀸 N개를 서로 공격할 수 없게 놓는 경우의 수를 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------- | :--------- |
| 8          | 92         |

---

### 문제 접근

  - `Back-Tracking` 문제

  - 2차원의 `board`를 구성하는 것이 아닌, 각 행 별로 Queen이 위치할 수 있는 열을 저장하는 1차원의 벡터 구성

    - `Queen`이 이동가능한 영역의 특성상 한 행에는 하나의 queen만 위치할 수 있음

  - `0`행을 시작으로 `0` ~ `N`열 까지 퀸을 위치시켜보면서 다음 퀸의 위치 고려

    - 이전 행에 위치한 퀸을 탐색하며 다른 열에 위치하고 대각선상에 위치하지 않는 경우에 해당하는 위치에 새로운 퀸을 위치시킴

  - 새로 위치한 퀸의 개수가 `N`개가 같아지면 종료

  - 퀸이 위치할수 있는 모든 경우의 수를 출력한 후 종료