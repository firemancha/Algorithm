# [A+B - 6](https://www.acmicpc.net/problem/10953)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   1 초    |   256 MB    | 25683 | 16821 |   14841   |  66.716%  |

</div>

### 문제

두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. A와 B는 콤마(,)로 구분되어 있다. (0 < A, B < 10)

---

### 출력

각 테스트 케이스마다 A+B를 출력한다.

---

### 예제 입력

|                예제 입력1                 |         예제 출력1         |
| :---------------------------------------: | :------------------------: |
| 5<br/>1,1<br/>2,3<br/>3,4<br/>9,8<br/>5,2 | 2<br/>5<br/>7<br/>17<br/>7 |

---

### 문제 접근

  - 각 테스트 케이스별로 하나의 `string`을 입력받음

  - `A`와 `B`가 10보다 작으므로 `string`의 `0`번 인덱스와 `2`번 인덱스를 파싱하여 두 수를 더하여 출력