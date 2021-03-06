# [타일 뒤집기 (Easy)](https://www.acmicpc.net/problem/14711)

<div align = center>

| 시간 제한 | 메모리 제한 | 제출  | 정답  | 맞은 사람 | 정답 비율 |
| :-------: | :---------: | :---: | :---: | :-------: | :-------: |
|   1 초    |   512 MB    |  330  |  240  |    186    |  75.610%  |

</div>

### 문제

지구이는 신기한 게임판을 가지고 있다. 이 게임판에는 한 면은 검은색, 한 면은 흰색으로 칠해진 타일이 N행 N열으로 배치되어 있다. 각 타일은 제자리에서 뒤집을 수 있는데, 타일 하나를 뒤집으면 그 타일과 상하좌우로 인접한 타일들이 같이 뒤집힌다. 지구이는 타일들이 무작위로 배치된 게임판에서 타일들을 적당히 뒤집어서 모든 타일이 흰색 면이 위를 향하도록 만드는 놀이를 좋아한다.

<div align=center>
  <img src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/14704/1.png" width="540" height="115" />
</div>

어느 날, 지구이가 게임판을 가지고 놀다가 자리를 비운 사이 지구이의 동생이 이 게임판을 발견했다. 지구이의 동생은 놀이의 규칙을 모르기 때문에, 그냥 처음 상태에서 검은색 면이 위를 향하고 있는 타일들을 전부 한 번씩 뒤집어 보았다. 그러자 놀랍게도 모든 타일이 흰색 면이 위를 향하게 되었다!

<div align=center>
  <img src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/14704/2.png" width="539" height="137" />
</div>

돌아온 지구이는 동생에게 놀이의 규칙을 알려 주려고 했지만, 그 전에 동생이 즐거워하는 모습을 더 보고 싶어져서 같은 특징을 갖는 게임판을 몇 번 더 만들어 주기로 했다. 지구이는 멋진 해커이기 때문에 게임판의 규칙을 따르지 않고 원하는 타일들만 따로 뒤집어서 원하는 색 배치를 만들 수 있다. 하지만 아무 조건 없이 타일을 뒤집는 것은 별로 재미가 없었기 때문에, 지구이는 게임판의 첫 행의 타일들은 뒤집지 않고 원하는 배치를 만들어 보기로 했다.

---

### 입력

첫 번째 줄에 게임판의 크기 N(1 ≤ N ≤ 1, 000)이 주어진다.

두 번째 줄에는 게임판의 첫 행의 타일들의 상태를 나타내는 N글자의 문자열이 주어진다. 문자열은 `#`와 `.`만으로 이루어져 있으며, `#`는 검은색 면이 위를 향하도록 고정된 타일, `.`는 흰색 면이 위를 향하도록 고정된 타일을 의미한다.

---

### 출력

N개의 줄에 걸쳐 지구이의 동생이 검은색 면이 위를 향하고 있는 타일들을 전부 한 번씩 뒤집어서 모든 타일이 흰색 면이 위를 향하도록 만들 수 있는 게임판의 모양을 출력한다. 입력 조건과 마찬가지로 검은색 면이 위를 향하고 있는 타일은 `#`, 흰색 면이 위를 향하고 있는 타일은 `.`로 나타낸다.

가능한 모든 입력에 대해 답이 유일하게 존재함이 보장된다.

---

### 예제 입력

| 예제 입력1 |     예제 출력1      |
| :--------: | :-----------------: |
| 3<br/>.#.  | .#.<br/>#.#<br/>.#. |

| 예제 입력2  |                  예제 출력2                   |
| :---------: | :-------------------------------------------: |
| 5<br/>#..#. | #..#.<br/>.##.#<br/>.###.<br/>#.##.<br/>.#..# |

|   예제 입력3   |                                             예제 출력3                                              |
| :------------: | :-------------------------------------------------------------------------------------------------: |
| 8<br/>#.##.### | #.##.###<br/>..##.#.#<br/>##...###<br/>##.##...<br/>...##.##<br/>###...##<br/>#.#.##..<br/>###.##.# |

---

### 문제 접근

  - `Greedy` 문제

  - 첫 번째 행은 뒤집지 않고, 검은색 면만 뒤집음

  - 0번째 행부터 N-1번째 행까지 순회하면서 왼쪽, 위, 오른쪽 좌표값이 `#`인 개수 카운트

  - `#`의 개수가 홀수이면 해당 열의 i + 1행이 `#`이어야 함