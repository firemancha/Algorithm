# [소수&팰린드롬](https://www.acmicpc.net/problem/1747)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   2 초    |   256 MB    | 10541 | 3129  |   2281    |  28.427%  |

</div>

### 문제

어떤 수와 그 수의 숫자 순서를 뒤집은 수가 일치하는 수를 팰린드롬이라 부른다. 예를 들어 79,197과 324,423 등이 팰린드롬 수이다.

어떤 수 N (1 ≤ N ≤ 1,000,000)이 주어졌을 때, N보다 크거나 같고, 소수이면서 팰린드롬인 수 중에서, 가장 작은 수를 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 N이 주어진다.

---

### 출력

첫째 줄에 조건을 만족하는 수를 출력한다.

---

### 예제 입력

| 예제 입력1 | 예제 출력1 |
| :--------: | :--------: |
|     31     |    101     |

---

### 문제 접근

  - `n`의 최댓값인 `1,000,000`보다 크면서 가장 작은 팰린드롬인 수는 `1,003,001`이므로 어림잡아 `1,010,000`까지의 소수를 구함

    - 에라토스테네스의 체 이용

  - 입력값 `n`보다 크거나 같은 수를 검사하면서 해당 수가 소수인 경우 팰린드롬인지 검사

    - 검사수를 `string`으로 변환한 뒤, `0`부터 `string의 길이 / 2`까지 순환하며 맨 앞의 수와 맨 뒤의 수가 같은지 검사

      ```cpp
      for(int i = 0 ; i < string.size() / 2; i++){
        if(string[i] == string[string.size() - j - 1]){
          ...
        }
      }
      ```

    - 검사 중 한 자리라도 다른 수가 있다면 `break` 후 다음 수를 검사

    - `string`의 인덱스가 종료 조건이 되기 직전까지 수가 같다면, 팰린드롬이므로 해당 수 출력

  - `string`의 길이가 `1`이라면 무조건 팰린드롬임