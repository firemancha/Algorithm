# [과제](https://www.acmicpc.net/problem/13904)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 256 MB      | 5904 | 2983 | 2370      | 51.100%   |

</div>

### 문제

웅찬이는 과제가 많다. 하루에 한 과제를 끝낼 수 있는데, 과제마다 마감일이 있으므로 모든 과제를 끝내지 못할 수도 있다. 과제마다 끝냈을 때 얻을 수 있는 점수가 있는데, 마감일이 지난 과제는 점수를 받을 수 없다.

웅찬이는 가장 점수를 많이 받을 수 있도록 과제를 수행하고 싶다. 웅찬이를 도와 얻을 수 있는 점수의 최댓값을 구하시오.

---

### 입력

첫 줄에 정수 N (1 ≤ N ≤ 1,000)이 주어진다.

다음 줄부터 N개의 줄에는 각각 두 정수 d (1 ≤ d ≤ 1,000)와 w (1 ≤ w ≤ 100)가 주어진다. d는 과제 마감일까지 남은 일수를 의미하며, w는 과제의 점수를 의미한다.

---

### 출력

얻을 수 있는 점수의 최댓값을 출력한다.

---

### 예제 입력

| 예제 입력1                                                       | 예제 출력1 |
| :--------------------------------------------------------------- | :--------- |
| 7<br/>4 60<br/>4 40<br/>1 20<br/>2 50<br/>3 30<br/>4 10<br/>>6 5 | 185        |

---

### 힌트

예제에서 다섯 번째, 네 번째, 두 번째, 첫 번째, 일곱 번째 과제 순으로 수행하고, 세 번째, 여섯 번째 과제를 포기하면 185점을 얻을 수 있다.

---

### 문제 접근

  - `Greedy` 문제

  - [순회강연](https://github.com/firemancha/Algorithm/tree/main/Baekjoon/Greedy/%5B2109%5D%EC%88%9C%ED%9A%8C%EA%B0%95%EC%97%B0)과 유사한 동일한 문제

  - `{D, W}`를 입력받고 C++ `Pair` 정렬 기준에 따라 오름차순 정렬

  - **0 ~ i** 까지 순회하면서 점수를 합함

  - 매 순회 시 마다 priority_queue에 해당 점수를 넣음

  - 순회 시 마다 `pq.size() > 과제 마감일`을 검사하면서, 조건이 true인 동안 pq의 최상단 값을 점수의 합에서 제함

    - 순회 기점을 기준으로 과제 마감일을 넘어가는 과제가 있는 경우, 기준 시점까지 더한 과제 점수 중 가장 낮은 점수를 제함