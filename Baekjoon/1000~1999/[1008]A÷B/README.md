# [A/B](https://www.acmicpc.net/problem/1008)

<div align = center>

| 시간 제한 | 메모리 제한 |  제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :----: | :---: | :-------: | :-------: |
|   2 초    |   128 MB    | 287600 | 91921 |   79291   |  33.838%  |

</div>

### 문제

두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

---

### 출력

첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.

---

### 예제 입력

| 예제 입력1 |             예제 출력1             |
| :--------: | :--------------------------------: |
|    1 3     | 0.33333333333333333333333333333333 |

10-9 이하의 오차를 허용한다는 말은 꼭 소수 9번째 자리까지만 출력하라는 뜻이 아니다.

| 예제 입력2 | 예제 출력2 |
| :--------: | :--------: |
|    4 5     |    0.8     |

---

### 문제 접근

  - `A / B` 반환