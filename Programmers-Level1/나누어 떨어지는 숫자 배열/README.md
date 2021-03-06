# 나누어 떨어지는 숫자 배열 - 연습문제

### 문제 설명

array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.

divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

---

### 제한사항

  - arr은 자연수를 담은 배열입니다.

  - 정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.

  - divisor는 자연수입니다.

  - array는 길이 1 이상인 배열입니다.

---

### 입출력 예

|      arr      | divisor |    return     |
| :-----------: | :-----: | :-----------: |
| [5, 9, 7, 10] |    5    |    [5, 10]    |
| [2, 36, 1, 3] |    1    | [1, 2, 3, 36] |
|   [3, 2, 6]   |   10    |     [-1]      |

---

### 입출력 예 설명

#### 입출력 예 #1

  - arr의 원소 중 5로 나누어 떨어지는 원소는 5와 10입니다. 따라서 [5, 10]을 리턴합니다.

#### 입출력 예 #2

  - arr의 모든 원소는 1으로 나누어 떨어집니다. 원소를 오름차순으로 정렬해 [1, 2, 3, 36]을 리턴합니다.

#### 입출력 예 #3

  - 3, 2, 6은 10으로 나누어 떨어지지 않습니다. 나누어 떨어지는 원소가 없으므로 [-1]을 리턴합니다.

---

### 문제 접근

  - `divisor`가 1이면 `arr`의 모든 값을 answer에 담고 sorting만 해주면 됨

  - `arr`의 size만큼 for문을 수행하면서 `divisor`로 `%`연산 수행 시 0이 반환되면 해당 값을 answer에 push_back

  - for문이 수행된 후 answer의 size가 0이면 -1을 push_back
    
    - 이 경우 -1을 push_back 한 후 answer를 바로 return

  - for문이 수행된 후 `algorithm`의 `sort`함수를 이용해 sorting 후 answer 반환