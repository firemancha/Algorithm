# [돌 게임 4](https://www.acmicpc.net/problem/9658)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 3788 | 1775 | 1584      | 48.949%   |

</div>

### 문제

돌 게임은 두 명이서 즐기는 재밌는 게임이다.

탁자 위에 돌 N개가 있다. 상근이와 창영이는 턴을 번갈아가면서 돌을 가져가며, 돌은 1개, 3개 또는 4개 가져갈 수 있다. 마지막 돌을 가져가는 사람이 게임을 지게 된다.

두 사람이 완벽하게 게임을 했을 때, 이기는 사람을 구하는 프로그램을 작성하시오. 게임은 상근이가 먼저 시작한다.

---

### 입력

첫째 줄에 N이 주어진다. (1 ≤ N ≤ 1000)

---

### 출력

상근이가 게임을 이기면 SK를, 창영이가 게임을 이기면 CY을 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------- | :--------- |
| 6          | SK         |

---

### 문제 접근

  - `DP` 문제

  - [돌 게임 3](https://github.com/firemancha/Algorithm/tree/main/Baekjoon/DynamicProgramming/%5B9657%5D%EB%8F%8C%20%EA%B2%8C%EC%9E%84%203)과 매우 비슷한 문제

  - 단, 이 문제는 마지막 돌을 가져가는 사람이 지는 문제임

  - 따라서 상근이가 이기는 경우를 `1`로 설정하고 지는 경우를 `0`으로 설정한 후 `dp[1], dp[3]`의 값은 0으로, `dp[2], dp[4]`의 값은 1로 초기화 한 후 진행

  - 이후의 로직은 [돌 게임 3](https://github.com/firemancha/Algorithm/tree/main/Baekjoon/DynamicProgramming/%5B9657%5D%EB%8F%8C%20%EA%B2%8C%EC%9E%84%203)과 같음