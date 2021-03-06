# [소트인사이드](https://www.acmicpc.net/problem/1427)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   2 초    |   128 MB    | 38450 | 23398 |   19743   |  61.371%  |

</div>

### 문제

배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

---

### 입력

첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

---

### 출력

첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------: | :--------: |
|    2143    |    4321    |

---

### 문제 접근

  - 수를 문자열의 형태로 받아 sorting하면 됨

  - 주어진 수가 `1,000,000,000` 이하이므로 `int`형 및 `stoi`사용 가능

  - C++ `<algorithm>`의 `sort`함수 이용

  - **O(nlog<sub>2</sub>n)**