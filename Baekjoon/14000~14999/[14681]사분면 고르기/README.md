# [사분면 고르기](https://www.acmicpc.net/problem/14681)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   1 초    |   512 MB    | 72789 | 45491 |   41114   |  63.896%  |

</div>

### 문제

흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다. 

<div align = center>
  <img src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/14681/1.png" width = "276" height = "200">
</div>

예를 들어, 좌표가 (12, 5)인 점 A는 x좌표와 y좌표가 모두 양수이므로 제1사분면에 속한다. 점 B는 x좌표가 음수이고 y좌표가 양수이므로 제2사분면에 속한다.

점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오. 단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.

---

### 입력

첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)

---

### 출력

점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------: | :--------: |
|  12<br/>5  |     1      |

| 예제 입력2 | 예제 출력2 |
| :--------: | :--------: |
| 9<br/>-13  |     4      |

---

### 문제 접근

  - `x`와 `y`에 각 사분면의 계수(`1` or `-1`)을 곱했을 때 두 수가 모두 양수면 해당 사분면 번호 반환