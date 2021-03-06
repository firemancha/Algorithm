# [요세푸스 문제](https://www.acmicpc.net/problem/1158)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 256 MB      | 55432 | 27003 | 19224     | 48.082%   |

</div>

### 문제

요세푸스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제 순서대로 K번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 5,000)

---

### 출력

예제와 같이 요세푸스 순열을 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1            |
| :--------- | :-------------------- |
| 7 3        | <3, 6, 2, 7, 5, 1, 4> |

---

### 문제 접근

  - `queue` 문제
  
  - 1부터 N까지의 수를 `queue`에 담은 후 `pop`을 하면서 1씩 count

  - count된 수가 `K`와 같으면 해당 수를 출력하고 같지 않은 경우에 `queue`에 다시 push

  - 출력문의 형식을 맞추기 위해 수를 출력한 이후 `queue`가 empty인지 확인

    - 마지막 수인지 체크하기 위함

    - pop한 이후 `queue`가 empty가 아닌 경우에는 `, `를 추가로 출력

    - empty인 경우에는 아무것도 출력하지 않음

    - 반복문을 수행하기 이전과 이후에 각각 `<`, `>`를 출력