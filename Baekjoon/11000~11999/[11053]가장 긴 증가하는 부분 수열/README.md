# [가장 긴 증가하는 부분 수열](https://www.acmicpc.net/problem/11053)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   1 초    |   256 MB    | 78247 | 30306 |   19934   |  36.974%  |


</div>

### 문제

수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 A = {**10**, **20**, 10, **30**, 20, **50**} 이고, 길이는 4이다.

---

### 입력

첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.

둘째 줄에는 수열 A를 이루고 있는 A<sub>i</sub>가 주어진다. (1 ≤ A<sub>i</sub> ≤ 1,000)

---

### 출력

첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다

---

### 예제 입력

|       예제 입력1        | 예제 출력1 |
| :---------------------: | :--------: |
| 6<br/>10 20 10 30 20 50 |     4      |

---

### 문제 접근

  - 각 수열의 `i`번째를 검사하면서, `0` ~ `i - 1`까지 자기보다 낮은 수열 중 가장 긴 부분 수열 검사

    - ex) {10, 20, 10, 30}

    - `i`번째 첫 검사 시 자기 자신은 가장 긴 부분 수열이 될 수 있으므로 `dp`의 값을 1로 초기화

    - `20`검사 시에, 이전에 나온 `10`이 `i`번째보다 낮은 값이므로 `dp[i - 1] + 1`값을 `dp[i]`에 저장

    - `10`검사 시, 이전에 나온 값들 중 자신보다 낮은 값이 없으므로 `dp[i] = 1`

    - `30`검사 시, 이전에 나온 값들 중 자신보다 낮은 값은 `{10, 20, 10}`인데, 이중 가장 긴 부분수열이 되기 위한 조건은 `{10, 20, 30}`이 되는 것

      - 따라서 `dp[i-1]`까지의 값 중 자기 자신보다 낮은 값을 가지는 index 중에서 최댓값을 뽑아냄

      - 도출된 최댓값에 `+ 1`(자기 자신을 수열에 더함)것이 `i`번째까지의 가장 긴 부분 수열이 됨

      ```cpp
      for(int i = 0; i < seq.size(); i++){
        for(int j = 0; j < i; j++){
          if(seq[i] > seq[j]){
            dp[i] = max(dp[i], dp[j] + 1]);
          }
        }
      }
      ```