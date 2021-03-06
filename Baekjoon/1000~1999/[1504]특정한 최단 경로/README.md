# [특정한 최단 경로](https://www.acmicpc.net/problem/1504)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 256 MB      | 41493 | 10483 | 7026      | 24.662%   |

</div>

### 문제

방향성이 없는 그래프가 주어진다. 세준이는 1번 정점에서 N번 정점으로 최단 거리로 이동하려고 한다. 또한 세준이는 두 가지 조건을 만족하면서 이동하는 특정한 최단 경로를 구하고 싶은데, 그것은 바로 임의로 주어진 두 정점은 반드시 통과해야 한다는 것이다.

세준이는 한번 이동했던 정점은 물론, 한번 이동했던 간선도 다시 이동할 수 있다. 하지만 반드시 최단 경로로 이동해야 한다는 사실에 주의하라. 1번 정점에서 N번 정점으로 이동할 때, 주어진 두 정점을 반드시 거치면서 최단 경로로 이동하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 정점의 개수 N과 간선의 개수 E가 주어진다. (2 ≤ N ≤ 800, 0 ≤ E ≤ 200,000) 둘째 줄부터 E개의 줄에 걸쳐서 세 개의 정수 a, b, c가 주어지는데, a번 정점에서 b번 정점까지 양방향 길이 존재하며, 그 거리가 c라는 뜻이다. (1 ≤ c ≤ 1,000) 다음 줄에는 반드시 거쳐야 하는 두 개의 서로 다른 정점 번호 v<sub>1</sub>과 v<sub>2</sub>가 주어진다. (v<sub>1</sub> ≠ v<sub>2</sub>, v<sub>1</sub> ≠ N, v<sub>2</sub> ≠ 1)

---

### 출력

첫째 줄에 두 개의 정점을 지나는 최단 경로의 길이를 출력한다. 그러한 경로가 없을 때에는 -1을 출력한다.

---

### 예제 입력

| 예제 입력1                                                              | 예제 출력1 |
| :---------------------------------------------------------------------- | :--------- |
| 4 6<br/>1 2 3<br/>2 3 3<br/>3 4 1<br/>1 3 5<br/>2 4 5<br/>1 4 4<br/>2 3 | 7          |

---

### 문제 접근

  - `Dijkstra` 문제

  - 총 세 번의 다익스트라 함수를 호출하도록 구현하였음

    - 1 : `1`번 정점을 시작 정점으로 하는 최단 경로 구하기

    - 2 : `v1`을 시작 정점으로 하는 최단 경로 구하기

    - 3 : `v2`를 시작 정점으로 하는 최단 경로 구하기

  - `dist`는 2차원으로 구성

    - `dist[i][j]`

    - `i` : 호출된 다익스트라 순서(1번이 시작정점, `v1`이 시작 정점, `v2`가 시작 정점)

    - `j` : 기준 시작정점으로부터 `j`번 정점까지의 최단 거리

  - 세 번의 다익스트라 호출 후 경로의 케이스를 두 가지로 나눠 해결

    ```cpp
    // path1 - 1 -> v1 -> v2 -> N
    path1 = dist[0][v1-1] + dist[1][v2-1] + dist[2][n-1];

    // path2 - 1 -> v2 -> v1 -> N
    path2 = dist[0][v2-1] + dist[2][v1-1] + dist[1][n-1];
    ```

  - `path1`과 `path2`중 더 작은 값이 정답이 됨

  - 단, 두 경로 모두 갈 수 없는 경우를 구하기 위해 `CLIP` 매크로 구현

    - `CLIP(X) ((X) > (INF) ? INF : X)`

    - `path1`과 `path2`에 `CLIP`을 적용

    - 두 경로 모두 `INF`인 경우, 두 경로 모두 시작 정점으로부터 `V1`, `V2`를 거쳐 `N`으로 갈 수 있는 경우의 수가 없는 것이므로 `-1` 출력

    - 두 경로 중 하나라도 `INF`가 아닌 경우 최단 경로를 구할 수 있음