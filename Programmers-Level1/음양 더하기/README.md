# 음양 더하기 - 프로그래머스 월간 코드 챌린지 시즌 2

### 문제 설명

어떤 정수들이 있습니다. 이 정수들의 절댓값을 차례대로 담은 정수 배열 absolutes와 이 정수들의 부호를 차례대로 담은 불리언 배열 signs가 매개변수로 주어집니다. 실제 정수들의 합을 구하여 return 하도록 solution 함수를 완성해주세요.

---

### 제한사항

  - absolutes의 길이는 1 이상 1,000 이하입니다.

    - absolutes의 모든 수는 각각 1 이상 1,000 이하입니다.
  
  - signs의 길이는 absolutes의 길이와 같습니다.

    - `signs[i]`가 참이면 `absoltues[i]`의 실제 정수가 양수임을, 그렇지 않으면 음수임을 의미합니다.

---

### 입출력 예

| absolutes |       signs        | result |
| :-------: | :----------------: | :----: |
| [4,7,12]  | [true,false,true]  |   9    |
|  [1,2,3]  | [false,false,true] |   0    |

---

### 입출력 예 설명

#### 입출력 예 #1

  - signs가 `[true, false, true]`이므로, 실제 수들의 값은 각각 4, -7, 12입니다.

  - 따라서 세 수의 합인 9를 return 해야 합니다.

#### 입출력 예 #2

  - signs가 `[false, false, true]`이므로, 실제 수들의 값은 각각 -1, -2, 3입니다.

  - 따라서 세 수의 합인 0을 return 해야 합니다.

---

### 문제 접근

  - absolutes의 최대 길이는 1,000

  - absolutes중 한 값의 최대 값은 1,000

  - absolutes의 모든 값을 더할 시 최대 값은 1,000,000

  - absolutes의 모든 값을 더할 시 최소 값은 -1,000,000

  - answer 값의 범위는 -1,000,000 < answer < 1,000,000

#### 따라서 absolutes의 처음부터 끝까지 확인하면서 같은 인덱스의 signs값이 true인 경우엔 값을 더해주고, false인 경우엔 값을 빼는 연산 수행

### brute force 방식으로 진행