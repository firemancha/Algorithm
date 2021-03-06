# [점화식](https://www.acmicpc.net/problem/13699)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 5 초      | 512 MB      | 2544 | 1828 | 1628      | 74.508%   |

</div>

### 문제

다음의 점화식에 의해 정의된 수열 t(n)을 생각하자:

  - `t(0)=1`

  - `t(n)=t(0)*t(n-1)+t(1)*t(n-2)+...+t(n-1)*t(0)`

이 정의에 따르면,

  - `t(1)=t(0)*t(0)=1`

  - `t(2)=t(0)*t(1)+t(1)*t(0)=2`

  - `t(3)=t(0)*t(2)+t(1)*t(1)+t(2)*t(0)=5`

  - ...

주어진 입력 0 ≤ n ≤ 35에 대하여 t(n)을 출력하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 n (0 ≤ n ≤ 35)이 주어진다.

---

### 출력

첫째 줄에 t(n)을 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------- | :--------- |
| 3          | 5          |

| 예제 입력2 | 예제 출력2    |
| :--------- | :------------ |
| 25         | 4861946401452 |

---

### 문제 접근

  - `DP` 문제

  - 시간과 메모리 제한이 넉넉하여 문제 조건에 따라 그대로 코드 작성

  ```cpp
  dp[0] = 1;
  for(int i = 1; i <= N; i++){
    for(int j = 0; j < i; j++)
      dp[i] += dp[j] * d[i - j - 1];
  }
  ```