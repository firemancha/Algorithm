# [열쇠](https://www.acmicpc.net/problem/9328)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :--- | :-------- | :-------- |
| 1 초      | 256 MB      | 11244 | 3180 | 2055      | 25.585%   |

</div>

### 문제

상근이는 1층 빌딩에 침입해 매우 중요한 문서를 훔쳐오려고 한다. 상근이가 가지고 있는 평면도에는 문서의 위치가 모두 나타나 있다. 빌딩의 문은 모두 잠겨있기 때문에, 문을 열려면 열쇠가 필요하다. 상근이는 일부 열쇠를 이미 가지고 있고, 일부 열쇠는 빌딩의 바닥에 놓여져 있다. 상근이는 상하좌우로만 이동할 수 있다.

상근이가 훔칠 수 있는 문서의 최대 개수를 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 테스트 케이스의 개수가 주어진다. 테스트 케이스의 수는 100개를 넘지 않는다.

각 테스트 케이스의 첫째 줄에는 지도의 높이와 너비 h와 w (2 ≤ h, w ≤ 100)가 주어진다. 다음 h개 줄에는 빌딩을 나타내는 w개의 문자가 주어지며, 각 문자는 다음 중 하나이다.

  - '.'는 빈 공간을 나타낸다.

  - '*'는 벽을 나타내며, 상근이는 벽을 통과할 수 없다.

  - '$'는 상근이가 훔쳐야하는 문서이다.

  - 알파벳 대문자는 문을 나타낸다.

  - 알파벳 소문자는 열쇠를 나타내며, 그 문자의 대문자인 모든 문을 열 수 있다.

마지막 줄에는 상근이가 이미 가지고 있는 열쇠가 공백없이 주어진다. 만약, 열쇠를 하나도 가지고 있지 않는 경우에는 "0"이 주어진다.

상근이는 처음에는 빌딩의 밖에 있으며, 빌딩 가장자리의 벽이 아닌 곳을 통해 빌딩 안팎을 드나들 수 있다. 각각의 문에 대해서, 그 문을 열 수 있는 열쇠의 개수는 0개, 1개, 또는 그 이상이고, 각각의 열쇠에 대해서, 그 열쇠로 열 수 있는 문의 개수도 0개, 1개, 또는 그 이상이다. 열쇠는 여러 번 사용할 수 있다.

---

### 출력

각 테스트 케이스 마다, 상근이가 훔칠 수 있는 문서의 최대 개수를 출력한다.

---

### 예제 입력

| 예제 입력1                                                                                                                                                                                                                                                                                                                                                             | 예제 출력1 |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------- |
| 3<br/>5 17<br/>`*****************`<br/>`.............**$*`<br/>`*B*A*P*C**X*Y*.X.`<br/>`*y*x*a*p**$*$**$*`<br/>`*****************`<br/>cz<br/>5 11<br/>`*.*********`<br/>`*...*...*x*`<br/>`*X*.*.*.*.*`<br/>`*$*...*...*`<br/>`***********`<br/>0<br/>7 7<br/>`*ABCDE*`<br/>`X.....F`<br/>`W.$$$.G`<br/>`V.$$$.H`<br/>`U.$$$.J`<br/>`T.....K`<br/>`*SQPML*`<br/>irony | 3 1 0      |

---

### 문제 접근

  - [달이 차오른다, 가자.](https://www.acmicpc.net/problem/1194) 와 유사한 문제

  - 단, `visited`를 3차원으로 구성할 경우 메모리 초과 발생 가능

    - [달이 차오른다, 가자.](https://www.acmipc.cn/problem/1194)는 알파벳이 `5`개로 제한되어 있지만, 해당 문제는 모든 알파벳을 사용할 수 있기 때문에 최악의 경우 `visited`의 차원이 `101 * 101 * (2^26 - 1) := 684,577MB`이 됨

  - `visited`를 2차원으로 설정한 후, `key`값이 `update`될 때마다 `visited`를 초기화하고 `queue`를 비운 후 다음 목적지를 push하고 `dirs`에 대한 반복을 탈출하고 `queue`에 대한 반복을 순회하도록 `break` 사용

  - `queue`에 들어가는 값은 현재 좌표점과 가지고있는 키의 상태를 의미하는 값

  - 현재 좌표점을 기준으로 4방향을 검사하며 각 조건별로 분기

    1. `.`인 경우: 현재 키의 상태를 유지하며 다음 좌표점으로 이동

    2. `$`인 경우: 현재 키의 상태를 유지하고 `doc_cnt`를 하나 올린 후 현재 좌표점의 값을 `.`으로 변경 후 이동

      - 이후 다시 방문 시 중복 카운팅을 막기 위함

    3. `a` ~ `z`인 경우: 현재 키의 상태에 대해 `or` 비트 연산을 통해 키를 추가하고, 이후 방문시에도 연산의 중복을 막기 위해 좌표점의 값을 `.`으로 변경(+ 상술한 대로 `visited`초기화 및 `queue` clear)

    4. `A` ~ `Z`인 경우: 현재 가지고 있는 키로 문을 열 수 있는지 검사하고, 문을 열 수 있다면 이후 중복 연산을 피하기 위해 좌표점의 값을 `.`으로 변경 후 이동

  - `queue`가 `empty`가 될 떄 까지 순회 후 `doc_cnt` 출력
