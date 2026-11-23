# [Best Grass](https://acmicpc.net/problem/6186)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      |  128 MB      |  1857 |  1346 |  1133      |  74.490%   |

</div>

### 문제

Bessie is planning her day of munching tender spring grass and is gazing out upon the pasture which Farmer John has so lovingly partitioned into a grid with R (1 <= R <= 100) rows and C (1 <= C <= 100) columns. She wishes to count the number of grass clumps in the pasture.

Each grass clump is shown on a map as either a single '#' symbol or perhaps two '#' symbols side-by-side (but not on a diagonal). No two symbols representing two different clumps are adjacent. Given a map of the pasture, tell Bessie how many grass clumps there are.

By way of example, consider this pasture map where R=5 and C=6:

<pre>.#....
..#...
..#..#
...##.
.#....</pre>

This pasture has a total of 5 clumps: one on the first row, one that spans the second and third row in column 2, one by itself on the third row, one that spans columns 4 and 5 in row 4, and one more in row 5.

---

### 입력

- Line 1: Two space-separated integers: R and C

- Lines 2..R+1: Line i+1 describes row i of the field with C characters, each of which is a '#' or a '.'


---

### 출력

- Line 1: A single integer that is the number of grass clumps Bessie can munch

---

### 예제 입력
| 예제 입력1                                                  | 예제 출력1 |
| :---------------------------------------------------------- | :--------- |
| 5 6<br/>.#....<br/>..#...<br/>..#..#<br/>...##.<br/>.#.... |  5 |

---


### 문제 접근

  - `BFS` 문제

  - 상하좌우로 인접한 `#`을 하나의 잔디 덩어리로 보고, 덩어리(연결 요소)의 개수를 구함

    - 대각선은 인접한 것으로 보지 않으므로 `directions`는 4방향만 사용

  - 입력받은 맵을 `pasture[i][j] = (row[j] == '#')` 형태의 `bool` 2차원 배열로 저장

  - 모든 칸을 순회하면서 `#`이면서 아직 방문하지 않은 칸을 만나면 해당 칸에서 `BFS` 시작

    - `BFS`로 연결된 `#`을 모두 `visited` 처리한 뒤 `res`를 1 증가

  - 모든 칸은 한 번씩만 방문하므로 시간복잡도는 `O(R * C)`