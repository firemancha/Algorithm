# [The Friend of My Enemy is My Enemy](https://acmicpc.net/problem/9255)
<div align = center>

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞은 사람 | 정답 비율 |
| :-------- | :---------- | :--- | :--- | :-------- | :-------- |
| 1 초      | 128 MB      | 463 | 187 | 161      | 38.517%   |

</div>

### 문제

The NSA and various other agencies have a keen interest in tracking meta-data of phone calls and other interactions (e-mails) in order to build a network of who seems to be friends with whom. In fact, the government claims that the content of phone calls has not been spied upon, and only the meta-data (who called whom when and for how long) is being logged. The idea is that calling patterns will reveal social connections.

Part of the idea of building this network is that years later, when one person turns out to have been a terrorist, the agency can go through all their contacts to obtain leads to other potential terrorists. Of course, in many cases, “guilt by association” is an incredibly slippery slope in terms of ethical concerns, and any civilized society needs to be very careful when it considers someone potentially guilty. Notwithstanding such concerns, social network analysis algorithms seem to be a technique in intelligence that is here to stay, so we better understand them.

In this question, you will be given a network of who is friends (or associated) with whom, and the identity of one enemy. Your task is to output all friends of that person in the network, presumably for further investigation.

---

### 입력

The first line is the number K of input data sets, followed by the K data sets, each of the following form:

The first line contains two integers n, m, separated by a space. 1 ≤ n ≤ 100 is the number of people in your network. 0 ≤ m ≤ 10000 is the number of friendships among pairs of people.

Next come m lines, each containing two distinct integers between 1 and n, describing a connection between those two people.

Finally, on one more line, is a number s, 1 ≤ s ≤ n, the identity of the suspicious person we start from.

---

### 출력

For each data set, output “Data Set x:” on a line by itself, where x is its number. Then, output on one line all the direct friends of person s in the network, sorted in increasing order, separated by a space. (No person is friends with himself/herself, and we are not interested in friends-of-friends etc.) Each data set should be followed by a blank line.

---

### 예제 입력
| 예제 입력1                                                  | 예제 출력1 |
| :---------------------------------------------------------- | :--------- |
| 2<br/>5 5<br/>1 2<br/>4 1<br/>2 4<br/>1 4<br/>3 5<br/>1<br/>3 2<br/>2 3<br/>3 2<br/>1 | Data Set 1:<br/>2 4<br/><br/>Data Set 2:<br/> |

---

### 문제 접근

  - `그래프` 기초 문제 (`BFS`/`DFS` 불필요)

  - 문제 본문은 "all friends"라고 되어 있으나, 출력 조건에서 "not interested in friends-of-friends"로 **직접 친구만** 출력하도록 범위를 한정함

    - 처음에는 친구의 친구까지 탐색하는 `BFS` 문제로 오해했으나, `s`의 인접 정점만 구하면 되므로 탐색이 필요 없음

  - 친구 관계는 양방향이므로 `relation[a - 1][b - 1]`, `relation[b - 1][a - 1]`을 모두 `true`로 기록

    - 사람 번호는 `1 ~ n`이므로 `-1` 하여 `0`-based 인덱스로 변환 후 저장하고, 출력 시 `+1`

  - `relation[s - 1]` 행을 `0`부터 순회하며 `true`인 인덱스를 저장하면 자동으로 오름차순 정렬됨