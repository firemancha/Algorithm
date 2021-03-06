# [스도쿠](https://www.acmicpc.net/problem/2580)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 1 초      | 256 MB      | 50618 | 15067 | 9442      | 27.990%   |

</div>

### 문제

스도쿠는 18세기 스위스 수학자가 만든 '라틴 사각형'이랑 퍼즐에서 유래한 것으로 현재 많은 인기를 누리고 있다. 이 게임은 아래 그림과 같이 가로, 세로 각각 9개씩 총 81개의 작은 칸으로 이루어진 정사각형 판 위에서 이뤄지는데, 게임 시작 전 일부 칸에는 1부터 9까지의 숫자 중 하나가 쓰여 있다.

<div align=center>
  <img src="https://upload.acmicpc.net/508363ac-0289-4a92-a639-427b10d66633/-/preview/" width="240" height="320"/>
</div>

나머지 빈 칸을 채우는 방식은 다음과 같다.

  1. 각각의 가로줄과 세로줄에는 1부터 9까지의 숫자가 한 번씩만 나타나야 한다.

  2. 굵은 선으로 구분되어 있는 3x3 정사각형 안에도 1부터 9까지의 숫자가 한 번씩만 나타나야 한다.

위의 예의 경우, 첫째 줄에는 1을 제외한 나머지 2부터 9까지의 숫자들이 이미 나타나 있으므로 첫째 줄 빈칸에는 1이 들어가야 한다.

<div align=center>
  <img src="https://upload.acmicpc.net/38e505c6-0452-4a56-b01c-760c85c6909b/-/preview/" width="239" height="32"/>
</div>

또한 위쪽 가운데 위치한 3x3 정사각형의 경우에는 3을 제외한 나머지 숫자들이 이미 쓰여있으므로 가운데 빈 칸에는 3이 들어가야 한다.

<div align=center>
  <img src="https://upload.acmicpc.net/89873d9d-56ae-44f7-adb2-bd5d7e243016/-/preview/" width="86" height="82"/>
</div>

이와 같이 빈 칸을 차례로 채워 가면 다음과 같은 최종 결과를 얻을 수 있다.

<div align=center>
  <img src="https://upload.acmicpc.net/fe68d938-770d-46ea-af71-a81076bc3963/-/preview/" width="240" height="320"/>
</div>

게임 시작 전 스도쿠 판에 쓰여 있는 숫자들의 정보가 주어질 때 모든 빈 칸이 채워진 최종 모습을 출력하는 프로그램을 작성하시오.

---

### 입력

아홉 줄에 걸쳐 한 줄에 9개씩 게임 시작 전 스도쿠판 각 줄에 쓰여 있는 숫자가 한 칸씩 띄워서 차례로 주어진다. 스도쿠 판의 빈 칸의 경우에는 0이 주어진다. 스도쿠 판을 규칙대로 채울 수 없는 경우의 입력은 주어지지 않는다.

---

### 출력

모든 빈 칸이 채워진 스도쿠 판의 최종 모습을 아홉 줄에 걸쳐 한 줄에 9개씩 한 칸씩 띄워서 출력한다.

스도쿠 판을 채우는 방법이 여럿인 경우는 그 중 하나만을 출력한다.

---

### 제한

  - baekjoon의 백트래킹 알고리즘으로 풀 수 있는 입력만 주어진다. 다음은 그 알고리즘의 수행 시간이다.

    - C++14: 80ms

    - Java: 292ms

    - PyPy3: 1172ms

---

### 예제 입력

| 예제 입력1                                                                                                                                                                                        | 예제 출력1                                                                                                                                                                                        |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| 0 3 5 4 6 9 2 7 8<br/>7 8 2 1 0 5 6 0 9<br/>0 6 0 2 7 8 1 3 5<br/>3 2 1 0 4 6 8 9 7<br/>8 0 4 9 1 3 5 0 6<br/>5 9 6 8 2 0 4 1 3<br/>9 1 7 6 5 2 0 8 0<br/>6 0 3 7 0 1 9 5 2<br/>2 5 8 3 9 4 7 6 0 | 1 3 5 4 6 9 2 7 8<br/>7 8 2 1 3 5 6 4 9<br/>4 6 9 2 7 8 1 3 5<br/>3 2 1 5 4 6 8 9 7<br/>8 7 4 9 1 3 5 2 6<br/>5 9 6 8 2 7 4 1 3<br/>9 1 7 6 5 2 3 8 4<br/>6 4 3 7 8 1 9 5 2<br/>2 5 8 3 9 4 7 6 1 |

---

### 문제 접근

  - `Back-Tracking` 사용

  - `board`를 입력받고 빈칸의 좌표를 저장함

  - 빈칸을 `1` ~ `9`로 채우기 전, 변경하려는 대상 숫자가 해당 좌표에 유효한 값인지 확인

    1. `row`를 기준으로 해당 값이 유효한지 확인

    2. `col`를 기준으로 해당 값이 유효한지 확인

    3. 검사 대상 빈칸의 좌표를 가지고 영역의 위치를 구한 후, 해당 `3x3`영역에서 유효한 값인지 확인

  - 매 검사 시 마다 유효한 값이 아닌 경우, 바로 다음 수 확인

  - 유효한 값이라면 빈칸을 대상 수로 채운 후 `Back-Tracking` 수행

  - `done` 플래그를 사용해 모든 빈칸을 유효한 숫자로 채운 경우 `Back-Tracking`이 한 단계 끝날때 마다 바로 `return`하여 `main`함수로 돌아가도록 설정

  - `Back-Tracking`이 끝나고 `main`으로 돌아온 경우 현재 `board`를 출력한 후 종료