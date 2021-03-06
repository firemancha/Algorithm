# [사이클 단어](https://www.acmicpc.net/problem/1544)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 1315 | 573  | 456       | 46.769%   |

</div>

### 문제

사이클 단어는 어떤 단어를 원형 모양으로 차례대로 쓴 것이다. 따라서, 어떤 단어를 이렇게 쓴 후에 임의의 단어를 고른다. 그 후에 시계방향으로 차례대로 읽으면 그 것이 단어가 된다. 만약에 단어 A와 단어 B가 있을 때, 단어 B를 원형으로 써서, 단어 A와 같이 읽을 수 있으면, 두 단어는 같은 단어이다. 따라서, picture와 turepic은 같은 단어다.

N개의 단어가 주어졌을 때, 서로 다른 단어가 총 몇 개인지 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 단어의 개수 N이 주어진다. 둘째 줄부터 단어가 한 줄에 하나씩 주어진다. 단어는 영어 소문자로만 이루어져 있다. N은 50보다 작거나 같은 자연수이며, 단어의 길이는 최대 50이다.

---

### 출력

첫째 줄에 서로 다른 단어가 몇 개인지 출력한다.

---

### 예제 입력

| 예제 입력1                                       | 예제 출력1 |
| :----------------------------------------------- | :--------- |
| 5<br/>picture<br/><br/>icturep<br/>word<br/>ordw | 2          |

| 예제 입력2                                                | 예제 출력2 |
| :-------------------------------------------------------- | :--------- |
| 7<br/>ast<br/>ats<br/>tas<br/>tsa<br/>sat<br/>sta<br/>ttt | 3          |

| 예제 입력3                                   | 예제 출력3 |
| :------------------------------------------- | :--------- |
| 5<br/>aaaa<br/>aaa<br/>aa<br/>aaaa<br/>aaaaa | 4          |

---

### 문제 접근

  - `set`과 `string`을 이용하여 해결

  - `set`은 중복되지 않는 사이클 단어를 저장하는 컨테이너

  - 문자열을 한번 입력받을 때 마다 `set`에 들어있는 문자열들과 비교하여 같은 사이클 단어인 경우 `set`에 넣지 않고 다른 사이클 단어인 경우 `set`에 넣음

    1. 두 문자열의 길이로 비교

    2. 입력 문자열을 사이클 단어로 구현

      - 문자열의 맨 앞 문자를 맨 뒤로 하나씩 옮김

      - 한번이라도 `set`에 들어있는 문자열과 동일한 문자열이 생성되면 `set`에 넣지 않고 비교 종료

  - 모든 입력과 비교과정이 종료되면 `set`의 원소 개수를 출력한 후 종료