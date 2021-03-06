# [통계학](https://www.acmicpc.net/problem/2108)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :---- | :---- | :-------- | :-------- |
| 2 초      | 256 MB      | 61833 | 15571 | 12563     | 26.866%   |

</div>

### 문제

수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

  1. 산술평균 : N개의 수들의 합을 N으로 나눈 값

  2. 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값

  3. 최빈값 : N개의 수들 중 가장 많이 나타나는 값

  4. 범위 : N개의 수들 중 최댓값과 최솟값의 차이

N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.

---

### 출력

첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.

---

### 예제 입력

| 예제 입력1                       | 예제 출력1           |
| :------------------------------- | :------------------- |
| 5<br/>1<br/>3<br/>8<br/>-2<br/>2 | 2<br/>2<br/>1<br/>10 |

| 예제 입력2 | 예제 출력2                   |
| :--------- | :--------------------------- |
| 1<br/>4000 | 4000<br/>4000<br/>4000<br/>0 |

| 예제 입력3                           | 예제 출력3             |
| :----------------------------------- | :--------------------- |
| 5<br/>-1<br/>-2<br/>-3<br/>-1<br/>-2 | -2<br/>-2<br/>-1<br/>2 |

---

### 문제 접근

  - 정렬 문제

  - avg의 경우 모든 값을 더한 후 N으로 나눈 값을 round()함수를 이용해 반올림을 구함

  - median의 경우 순열을 정렬한 후 N/2인덱스에 해당하는 값으로 지정

  - mode는 순열의 값과 빈도수를 저장하는 freq 벡터를 선언한 후, 빈도수를 기준으로 정렬하되, 빈도수가 같은 경우 실제값을 기준으로 내림차순 정렬

    - mode의 값은 빈도수가 같은 것이 여러 개인 경우 freq[1].first가 됨

  - scope는 max값과 min값의 차이로 구함