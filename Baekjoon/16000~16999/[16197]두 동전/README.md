# [두 동전](https://www.acmicpc.net/problem/16197)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 5367 | 2328 | 1578      | 42.328%   |

</div>

### 문제

N×M 크기의 보드와 4개의 버튼으로 이루어진 게임이 있다. 보드는 1×1크기의 정사각형 칸으로 나누어져 있고, 각각의 칸은 비어있거나, 벽이다. 두 개의 빈 칸에는 동전이 하나씩 놓여져 있고, 두 동전의 위치는 다르다.

버튼은 "왼쪽", "오른쪽", "위", "아래"와 같이 4가지가 있다. 버튼을 누르면 두 동전이 버튼에 쓰여 있는 방향으로 동시에 이동하게 된다.

  - 동전이 이동하려는 칸이 벽이면, 동전은 이동하지 않는다.

  - 동전이 이동하려는 방향에 칸이 없으면 동전은 보드 바깥으로 떨어진다.

  - 그 외의 경우에는 이동하려는 방향으로 한 칸 이동한다.이동하려는 칸에 동전이 있는 경우에도 한 칸 이동한다.

두 동전 중 하나만 보드에서 떨어뜨리기 위해 버튼을 최소 몇 번 눌러야하는지 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 보드의 세로 크기 N과 가로 크기 M이 주어진다. (1 ≤ N, M ≤ 20)

둘째 줄부터 N개의 줄에는 보드의 상태가 주어진다.

  - o: 동전

  - .: 빈 칸

  - #: 벽

동전의 개수는 항상 2개이다.

---

### 출력

첫째 줄에 두 동전 중 하나만 보드에서 떨어뜨리기 위해 눌러야 하는 버튼의 최소 횟수를 출력한다. 만약, 두 동전을 떨어뜨릴 수 없거나, 버튼을 10번보다 많이 눌러야 한다면, -1을 출력한다.

---

### 예제 입력

| 예제 입력1   | 예제 출력1 |
| :----------- | :--------- |
| 1 2<br/>`oo` | 1          |

| 예제 입력2                                                | 예제 출력2 |
| :-------------------------------------------------------- | :--------- |
| 6 2<br/>`.#`<br/>`.#`<br/>`.#`<br/>`o#`<br/>`o#`<br/>`##` | 4          |

| 예제 입력3                                                | 예제 출력3 |
| :-------------------------------------------------------- | :--------- |
| 6 2<br/>`..`<br/>`..`<br/>`..`<br/>`o#`<br/>`o#`<br/>`##` | 3          |

| 예제 입력4                                            | 예제 출력4 |
| :---------------------------------------------------- | :--------- |
| 5 3<br/>`###`<br/>`.o.`<br/>`###`<br/>`.o.`<br/>`###` | -1         |

| 예제 입력5                                                 | 예제 출력5 |
| :--------------------------------------------------------- | :--------- |
| 5 3<br/><br/>`###`<br/>`.o.`<br/>`#.#`<br/>`.o.`<br/>`###` | 3          |

---

### 문제 접근

  - `Back-Tracking` 문제

  - 각 character 문자들을 int형 숫자로 mapping

    <pre>0: 빈칸    1: 동전     2: 벽</pre>

  - `Back-Trakcing`의 종료 조건(단, 초기 `answer`값은 11)

    - `count`된 값이 `answer`보다 크거나 같은 경우 종료

    - 버튼을 누름으로써 이동된 두 개의 동전이 모두 떨어진 경우 종료

    - 이동된 두 개의 동전 중 하나만 떨어진 경우 `answer`값을 갱신 후 종료

  - 두 동전의 위치 갱신 과정 중, 새로 이동될 위치가 벽인 경우 갱신한 동전의 위치를 이전 동전의 위치로 재설정

  - `Back-Trackng`이 끝난 후, `answer`의 값이 10보다 큰 경우 `-1`로 설정