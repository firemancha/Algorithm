# [과목선택](https://www.acmicpc.net/problem/11948)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 512 MB      | 4257 | 3290 | 3107      | 78.858%   |

</div>

### 문제

JOI는 물리, 화학, 생물, 지구과학, 역사, 지리 총 6 과목의 시험을 봤다. 각 시험의 만점은 100점이다.

JOI는 물리, 화학, 생물, 지구과학 4과목 중에서 3 과목을 선택하고 역사, 지리 2 과목 중에서 한 과목을 선택한다.

시험 점수의 합이 가장 높게 나오도록 과목을 선택할 때, JOI가 선택한 과목의 시험 점수의 합을 구하시오.

---

### 입력

입력은 6행으로 되어있으며, 각 행에 1개의 정수가 주어진다.

1행에는 JOI의 물리 시험의 점수 A가 주어진다.

2행에는 JOI의 화학 시험의 점수 B가 주어진다.

3행에는 JOI의 생물 시험의 점수 C가 주어진다.

4행에는 JOI의 지구과학의 시험 점수 D가 주어진다.

5행에는 JOI의 역사 시험의 점수 E가 주어진다.

6행에는 JOI의 지리 시험의 점수 F가 주어진다.

입력한 정수 A, B, C, D, E, F는 모두 0이상 100이하이다.

---

### 출력

JOI가 선택한 과목의 총 점수를 1행에 출력하시오.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------- | :--------- |
| 100        |
34
76
42
10
0           |  228          |

| 예제 입력2 | 예제 출력2 |
| :--------- | :--------- |
| 15         |
21
15
42
15
62          |   140         |

---

### 힌트

예제 입/출력 1에서는 JOI가 물리, 생물, 지구과학, 역사, 4과목을 선택한 경우에 시험의 총 점수가 제일 높습니다.

물리, 생물, 지구과학, 역사의 점수가 각각 100, 76,42, 10이므로 선택한 과목의 총 점수는 228입니다.

예제 입/출력 2에서는 JOI가 화학, 생물, 지구과학, 지리, 4과목을 선택한 경우에 시험의 총 점수가 제일 높습니다.

화학, 생물, 지구과학, 지리의 점수가 각각 21, 15, 42, 62이므로 선택한 과목의 총 점수는 140입니다.

---

### 문제 접근

  - `Math` 문제

  - 4개의 수를 입력받고, 모든 수를 더함

    - 단, 입력받는 과정에서 가장 낮은 수 하나를 찾고 입력과정이 끝나면 해당 수를 뺌

  - 2개의 수를 입력받고, 모든 수를 더함

    - 마찬가지로 가장 낮은 수 하나를 찾은 후 입력이 끝나면 해당 수를 뺌

  - 모두 더해진 수 출력