# [골든바흐의 추측](https://www.acmicpc.net/problem/6588)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   1 초    |   256 MB    | 41207 | 11444 |   7600    |  25.658%  |

</div>

### 문제

1742년, 독일의 아마추어 수학가 크리스티안 골드바흐는 레온하르트 오일러에게 다음과 같은 추측을 제안하는 편지를 보냈다.

> 4보다 큰 모든 짝수는 두 홀수 소수의 합으로 나타낼 수 있다.

예를 들어 8은 3 + 5로 나타낼 수 있고, 3과 5는 모두 홀수인 소수이다. 또, 20 = 3 + 17 = 7 + 13, 42 = 5 + 37 = 11 + 31 = 13 + 29 = 19 + 23 이다.

이 추측은 아직도 해결되지 않은 문제이다.

백만 이하의 모든 짝수에 대해서, 이 추측을 검증하는 프로그램을 작성하시오.

---

### 입력

입력은 하나 또는 그 이상의 테스트 케이스로 이루어져 있다. 테스트 케이스의 개수는 100,000개를 넘지 않는다.

각 테스트 케이스는 짝수 정수 n 하나로 이루어져 있다. (6 ≤ n ≤ 1000000)

입력의 마지막 줄에는 0이 하나 주어진다.

---

### 출력

각 테스트 케이스에 대해서, n = a + b 형태로 출력한다. 이때, a와 b는 홀수 소수이다. 숫자와 연산자는 공백 하나로 구분되어져 있다. 만약, n을 만들 수 있는 방법이 여러 가지라면, b-a가 가장 큰 것을 출력한다. 또, 두 홀수 소수의 합으로 n을 나타낼 수 없는 경우에는 "Goldbach's conjecture is wrong."을 출력한다.

---

### 예제 입력

|      예제 입력1       |                예제 출력1                 |
| :-------------------: | :---------------------------------------: |
| 8<br/>20<br/>42<br/>0 | 8 = 3 + 5<br/>20 = 3 + 17<br/>42 = 5 + 37 |

---

### 문제 접근

  - 각 테스트 케이스별 입력받는 수의 최댓값은 `1,000,000`이므로 크기 `1,000,001`짜리의 에라토스테네스 체(`bool`형 벡터)를 선언한 후, 소수들만 남도록 초기화

  - 입력받은 `n`에 따라, 최초의 홀수 소수인 `3`부터 `n / 2`까지 반복하면서 해당 수를 `j`라고 할 때, `j`와 `n - j`가 모두 소수일 때, 해당 수들 저장

  - 가장 먼저 검사된 수가 `b - a`의 수가 가장 큰 수의 쌍이므로 조건에 맞는 수가 등장하면 `break`
