# [다리 만들기](https://www.acmicpc.net/problem/2146)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   2 초    |   192 MB    | 32524 | 11815 |   7342    |  33.327%  |

</div>

### 문제

여러 섬으로 이루어진 나라가 있다. 이 나라의 대통령은 섬을 잇는 다리를 만들겠다는 공약으로 인기몰이를 해 당선될 수 있었다. 하지만 막상 대통령에 취임하자, 다리를 놓는다는 것이 아깝다는 생각을 하게 되었다. 그래서 그는, 생색내는 식으로 한 섬과 다른 섬을 잇는 다리 하나만을 만들기로 하였고, 그 또한 다리를 가장 짧게 하여 돈을 아끼려 하였다.

이 나라는 N×N크기의 이차원 평면상에 존재한다. 이 나라는 여러 섬으로 이루어져 있으며, 섬이란 동서남북으로 육지가 붙어있는 덩어리를 말한다. 다음은 세 개의 섬으로 이루어진 나라의 지도이다.

<div align=center>
  <img src="https://www.acmicpc.net/JudgeOnline/upload/201008/bri.PNG" width="243px" height="225px">
</div>

위의 그림에서 색이 있는 부분이 육지이고, 색이 없는 부분이 바다이다. 이 바다에 가장 짧은 다리를 놓아 두 대륙을 연결하고자 한다. 가장 짧은 다리란, 다리가 격자에서 차지하는 칸의 수가 가장 작은 다리를 말한다. 다음 그림에서 두 대륙을 연결하는 다리를 볼 수 있다.

<div align=center>
  <img src="https://www.acmicpc.net/JudgeOnline/upload/201008/b2.PNG" width="247px" height="220px">
</div>

물론 위의 방법 외에도 다리를 놓는 방법이 여러 가지 있으나, 위의 경우가 놓는 다리의 길이가 3으로 가장 짧다(물론 길이가 3인 다른 다리를 놓을 수 있는 방법도 몇 가지 있다).

지도가 주어질 때, 가장 짧은 다리 하나를 놓아 두 대륙을 연결하는 방법을 찾으시오.

---

### 입력

첫 줄에는 지도의 크기 N(100이하의 자연수)가 주어진다. 그 다음 N줄에는 N개의 숫자가 빈칸을 사이에 두고 주어지며, 0은 바다, 1은 육지를 나타낸다. 항상 두 개 이상의 섬이 있는 데이터만 입력으로 주어진다.

---

### 출력

첫째 줄에 가장 짧은 다리의 길이를 출력한다.

---

### 예제 입력

|                                                                                                                     예제 입력1                                                                                                                     | 예제 출력1 |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :--------: |
| 10<br/>1 1 1 0 0 0 0 1 1 1<br/>1 1 1 1 0 0 0 0 1 1<br/>1 0 1 1 0 0 0 0 1 1<br/>0 0 1 1 1 0 0 0 0 1<br/>0 0 0 1 0 0 0 0 0 1<br/>0 0 0 0 0 0 0 0 0 1<br/>0 0 0 0 0 0 0 0 0 0<br/>0 0 0 0 1 1 0 0 0 0<br/>0 0 0 0 1 1 1 0 0 0<br/>0 0 0 0 0 0 0 0 0 0 |     3      |

---

### 문제 접근

- 그래프 문제

- 섬마다 라벨링 진행(1 ~ )

- `BFS Level`에 기준하여 BFS를 수행하고, 섬에서 섬 사이의 거리를 모든 섬에 대해 구하여 최솟값 출력

  - 섬과 섬 사이를 구할 때의 `Level 0`는 바다와 맞닿아있는 육지
