# [일요일 아침의 데이트](https://www.acmicpc.net/problem/1445)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 2 초      | 128 MB      | 2698 | 699  | 468       | 23.088%   |

</div>

### 문제

일요일 아침에 형택이는 Maroon5의 Sunday Morning이란 노래를 들으면서 여자친구와의 로맨틱한 여행을 떠나기로 했다. 형택이는 이것저것 환상에 빠져있다가, 계획을 세우는데 실패했다. 따라서, 주위에 있는 숲을 같이 탐험하기로 했다.

깊은 숲속에는 정말 아름다운 꽃이 하나있다. 형택이는 여자친구의 마음을 감동시키기 위해서, 꽃을 보여주면서 자신의 마음을 전해주려고 급하게 계획했다.

불행하게도, 사람들이 숲에다 쓰레기를 버려서 형택이의 계획은 정말 망가지기 직전이다.

형택이는 그동안 여자친구와 사귀면서 2가지 깨달은 것이 있는데, 한 가지는 쓰레기를 통과해서 지나가는 것을 정말 싫어하는 것이고, 쓰레기를 따라 옆을 지나가는 것도 정말 불편하게 느낀다는 것이다.

형택이는 방금 쓰레기가 어디에있는지 조사를 마쳤다. 입력으로 숲의 지도가 주어진다. S는 형택이와 여자친구의 데이트 시작장소를  나타내고, F는 꽃이 있는 위치를 나타내고, g는 쓰레기가 있는 위치를 나타낸다. 그리고 .은 아무것도 없는 깨끗한 칸이다.

형택이의 목표는 S에서 F까지 가는데, 쓰레기로 차있는 칸을 되도록이면 적게 지나가는 것이다. 형택이와 여자친구는 한 번에 한 칸 움직일 수 있다. 가로 or 세로로 한 칸 움직일 수 있다. 만약 되도록 적게 지나가는 경우의 수가 여러개라면, 쓰레기 옆을 지나가는 칸의 개수를 최소로 해서 지나려고 한다. 만약 어떤 칸이 비어있는데, 인접한 칸에 쓰레기가 있으면 쓰레기 옆을 지나는 것이다. 그리고, S와 F는 세지 않는다.

---

### 입력

첫째 줄에 숲의 세로 크기 N과 가로 크기 M이 주어진다. N과 M은 3보다 크거나 같고, 50보다 작거나 같은 자연수이다. 둘째 줄부터 숲의 지도가 주어진다. 숲의 지도는 S, F, g, . 만으로 이루어져 있다. S는 반드시 모서리에 위치해 있고, F는 모서리에 위치해있지 않다. 그리고 S와 F는 반드시 하나만 주어진다.

---

### 출력

첫째 줄에 형택이와 여자친구가 가장 최적의 방법으로 숲을 지났을 때, 지나가는 쓰레기의 최소 개수를 출력하고, 공백으로 구분 한 후에 쓰레기 옆을 지나가는 칸의 개수를 출력한다.

---

### 예제 입력

| 예제 입력1                                                                        | 예제 출력1 |
| :-------------------------------------------------------------------------------- | :--------- |
| 6 6<br/>`......`<br/>`g..F..`<br/>`......`<br/>`..g...`<br/>`......`<br/>`...S.g` | 0 0        |

---

### 문제 접근

  - `우선순위 큐`를 이용한 `그래프` 문제

  - 일반적인 `BFS`를 수행하는 것과 비슷하지만, `priority_queue`를 이용

    - `priority_queue`: `<<쓰레기를 지난 수, 쓰레기 주변을 지난 수>, <x좌표, y좌표>>`의 형식

    - 우선순위는 `쓰레기를 지난 수` -> `쓰레기 주변을 지난 수` 순서로 낮은 값을 가지는 원소가 우선순위를 가짐

  - 입력받은 그래프 정보를 토대로 그래프 재구성(쓰레기 주변을 마킹하기 위함)

  - 마킹된 그래프를 토대로 `BFS`를 수행하여 `F`에 도달 시 `<쓰레기를 지난 수, 쓰레기 주변을 지난 수>` 값 반환