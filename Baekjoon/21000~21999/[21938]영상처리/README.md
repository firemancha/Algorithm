# [영상처리](https://www.acmicpc.net/problem/21938)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 512 MB      | 387  | 153  | 125       | 39.062%   |

</div>

### 문제

간단하지만 귀찮은 영상처리 과제가 주어졌다. 과제의 명세는 다음과 같다.

세로 길이가 `N`이고 가로 길이가 `M`인 화면은 총 `N` × `M`개의 픽셀로 구성되어 있고 `(i, j)`에 있는 픽셀은 `R`<sub>i,j</sub> (Red), `G`<sub>i,j</sub> (Green), `B`<sub>i,j</sub> (Blue) 3가지 색상의 의미를 담고 있다. 각 색상은 0이상 255이하인 값으로 표현 가능하다.

모든 픽셀에서 세 가지 색상을 평균내어 경계값 `T`보다 크거나 같으면 픽셀의 값을 255로, 작으면 0으로 바꿔서 새로운 화면으로 저장한다.

새로 만들어진 화면에서 값이 255인 픽셀은 물체로 인식한다. 값이 255인 픽셀들이 상하좌우로 인접해있다면 이 픽셀들은 같은 물체로 인식된다.

화면에서 물체가 총 몇 개 있는지 구하는 프로그램을 작성하시오.

---

### 입력

화면의 세로 `N`, 가로 `M` 값이 공백으로 구분되어 주어진다.

두 번째 줄부터 `N + 1`줄까지 `i`번째 가로를 구성하고 있는 픽셀의 `R`<sub>i,j</sub>, `G`<sub>i,j</sub>, `B`<sub>i,j</sub>의 값이 공백으로 구분되어 총 `M`개 주어진다.

마지막 줄에는 경계값 `T`가 주어진다.

---

### 출력

화면에 있는 물체의 개수를 출력하라. 만약 물체가 없으면 0을 출력하면 된다.

---

### 제한

  - 1 ≤ N, M ≤ 1,000 
  
  - 0 ≤ R<sub>i,j</sub>, G<sub>i,j</sub>, B<sub>i,j</sub> ≤ 255, R<sub>i,j</sub>, G<sub>i,j</sub>, B<sub>i,j</sub> 값은 정수
  
  - 0 ≤ T ≤ 255, T 값은 정수

### 예제 입력

| 예제 입력1                                                                                                                          | 예제 출력1 |
| :---------------------------------------------------------------------------------------------------------------------------------- | :--------- |
| 3 3<br/>255 255 255 100 100 100 255 255 255<br/>100 100 100 255 255 255 100 100 100<br/>255 255 255 100 100 100 255 255 255<br/>101 | 5          |

| 예제 입력2                                                      | 예제 출력2 |
| :-------------------------------------------------------------- | :--------- |
| 2 2<br/>124 150 123 100 100 100<br/>103 103 103 183 5 3<br/>255 | 0          |

---

### 문제 접근

  - 주어진 이미지 정보를 입력받은 `T`값을 기준으로 이진화

    - 입력받은 이미지는 `color` 이미지로, 각 R, G, B 채널들의 픽셀값들의 평균을 기준으로 이진화 해야 함

    - `avg = color[i][3 * i + 0] + color[i][3 * i + 1] + color[i][3 * i + 2]`

  - 이진화 이후 `255`의 값들로 서로 연결되어있는 서브 그래프의 개수를 구하는 문제

  - `BFS` 이용