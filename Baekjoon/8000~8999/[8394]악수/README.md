# [악수](https://www.acmicpc.net/problem/8394)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 256 MB      | 2777 | 1304 | 1078      | 46.566%   |

</div>

### 문제

회의가 끝났고, 이제 악수를 하는 시간이다. 모든 사람은 직사각형 탁자 하나의 한 면에 앉아있다.

자리를 벗어나지 않고 악수를 하는 방법의 수는 총 몇 가지일까?

각 사람들은 자신의 왼쪽이나 오른쪽에 있는 사람들과 악수를 할 수 있다. (안 할 수도 있다)

---

### 입력

첫째 줄에 회의에 참석한 사람의 수 n (1 ≤ n ≤ 10,000,000)이 주어진다.

---

### 출력

첫째 줄에 악수를 하는 방법의 수를 출력한다. 수가 매우 커질 수 있기 때문에, 마지막 자리만 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------- | :--------- |
| 4          | 5          |

---

### 힌트

<img src="https://www.acmicpc.net/upload/images/kon.png" width="102" height="111" />

n=4인 경우에는 5가지 방법이 있다.

---

### 문제 접근

  - `DP` 문제

  - 피노나치 문제

  - `dp[i] = (dp[i - 1] + dp[i - 2]) % 10`