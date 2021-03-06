# [바닥 장식](https://www.acmicpc.net/problem/1388)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 1531 | 834  | 739       | 56.198%   |

</div>

### 문제

형택이는 건축가이다. 지금 막 형택이는 형택이의 남자 친구 기훈이의 집을 막 완성시켰다. 형택이는 기훈이 방의 바닥 장식을 디자인했고, 이제 몇 개의 나무 판자가 필요한지 궁금해졌다. 나무 판자는 크기 1의 너비를 가졌고, 양수의 길이를 가지고 있다. 기훈이 방은 직사각형 모양이고, 방 안에는 벽과 평행한 모양의 정사각형으로 나누어져 있다.

이제 ‘-’와 ‘|’로 이루어진 바닥 장식 모양이 주어진다. 만약 두 개의 ‘-’가 인접해 있고, 같은 행에 있다면, 두 개는 같은 나무 판자이고, 두 개의 ‘|’가 인접해 있고, 같은 열에 있다면, 두 개는 같은 나무 판자이다.

기훈이의 방 바닥을 장식하는데 필요한 나무 판자의 개수를 출력하는 프로그램을 작성하시오.

---

### 입력

첫째 줄에 방 바닥의 세로 크기N과 가로 크기 M이 주어진다. 둘째 줄부터 N개의 줄에 M개의 문자가 주어진다. 이것은 바닥 장식 모양이고, '-‘와 ’|‘로만 이루어져 있다. N과 M은 50 이하인 자연수이다.

---

### 출력

첫째 줄에 문제의 정답을 출력한다.

---

### 예제 입력

| 예제 입력1                                      | 예제 출력1 |
| :---------------------------------------------- | :--------- |
| 4 4<br/>`----`<br/>`----`<br/>`----`<br/>`----` | 4          |

| 예제 입력2                                                                                                                    | 예제 출력2 |
| :---------------------------------------------------------------------------------------------------------------------------- | :--------- |
| 6 9<br/>`-\|\|--\|\|--`<br/>`--\|\|--\|\|-`<br/>`\|--\|\|--\|\|`<br/>`\|\|--\|\|--\|`<br/>`-\|\|--\|\|--`<br/>`--\|\|--\|\|-` | 31         |

| 예제 입력3                                                                                                                     | 예제 출력3 |
| :----------------------------------------------------------------------------------------------------------------------------- | :--------- |
| 7 8<br/>`--------`<br/>`\|------\|`<br/>`\|\|----\|\|`<br/>`\|\|\|--\|\|\|`<br/>`\|\|----\|\|`<br/>`\|------\|`<br/>`--------` | 13         |

| 예제 입력4                                                                                                                                                                                                                                                  | 예제 출력4 |
| :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------- |
| 10 10<br/>`\|\|-\|\|-\|\|\|-`<br/>`\|\|--\|\|\|\|\|\|`<br/>`-\|-\|\|\|\|\|\|\|`<br/>`-\|-\|\|-\|\|-\|`<br/>`\|\|--\|-\|\|\|\|`<br/>`\|\|\|\|\|\|-\|\|-`<br/>`\|-\|\|\|\|\|\|\|\|`<br/>`\|\|\|\|\|\|\|\|\|\|`<br/>`\|\|---\|--\|\|`<br/>`-\|\|-\|\|\|\|\|\|` | 41         |

| 예제 입력5                                                                                                  | 예제 출력5 |
| :---------------------------------------------------------------------------------------------------------- | :--------- |
| 6 6<br/>`-\|\|--\|`<br/>`\|\|\|\|\|\|`<br/>`\|\|\|-\|-`<br/>`-\|\|\|\|-`<br/>`\|\|\|\|-\|`<br/>`\|\|-\|\|-` | 19         |

---

### 문제 접근

  - `BFS` 문제

  - `i, j`가 `0, 0`부터 `N-1, M-1`까지 순회하도록 코드를 작성했기 때문에 `-`의 방향은 오른쪽 방향 + 1, `|`의 방향은 아래 방향 + 1로 고정됨

  - main에서 2중 반복을 수행하며 방문하지 않은 지점을 기준으로 `BFS`를 수행하며, `-`의 경우 오른쪽행 + 1으로, `|`의 경우 아래쪽열 + 1로 같은 문자인지 확인

  - 진행방향으로 탐색 시 같은 문자값이라면 queue에 push하고, queue가 비어있을 때 까지 같은 과정 반복

    - queue의 값을 한번 pop할 때 마다 count

  - `BFS`를 수행할 때마다 count된만큼의 나무 판자는 하나로 판단

    - 종류에 따라 `horizontal`, `vertical` 벡터에 push

  - 즉, `horizontal`, `vertical` 벡터에 push된 원소 갯수의 합이 문제에서 요구하는 나무 판자의 개수가 됨