# [단지번호붙이기](https://www.acmicpc.net/problem/2667)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   1 초    |   128 MB    | 87466 | 36088 |   22762   |  39.339%  |

</div>

### 문제

<그림 1>과 같이 정사각형 모양의 지도가 있다. 1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다. 철수는 이 지도를 가지고 연결된 집의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다. 여기서 연결되었다는 것은 어떤 집이 좌우, 혹은 아래위로 다른 집이 있는 경우를 말한다. 대각선상에 집이 있는 경우는 연결된 것이 아니다. <그림 2>는 <그림 1>을 단지별로 번호를 붙인 것이다. 지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

<div align = center>

![Image](https://www.acmicpc.net/upload/images/ITVH9w1Gf6eCRdThfkegBUSOKd.png)

</div>

---

### 입력

첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

---

### 출력

첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.

---

### 예제 입력

|                                      예제 입력1                                       |     예제 출력1      |
| :-----------------------------------------------------------------------------------: | :-----------------: |
| 7<br/>0110100<br/>0110101<br/>1110101<br/>0000111<br/>0100000<br/>0111110<br/>0111000 | 3<br/>7<br/>8<br/>9 |


---

### 문제 접근

  - `BFS/DFS`를 여러 번 수행하면 됨

  - 전체 그래프를 탐색하면서 집이 있는곳이 나타나면, 해당 집을 기준으로 `BFS`를 수행해 단지를 찾음

    - 이 때, `BFS`를 수행하면서 단지 내 집의 개수를 count

  - 이후에도 전체 그래프 탐색이 완료될 때까지 반복하면 단지 당 집의 개수와 총 단지의 수를 구할 수 있음