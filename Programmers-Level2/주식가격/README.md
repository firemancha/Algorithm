# 주식가격 - 스택/큐

### 문제 설명

초 단위로 기록된 주식가격이 담긴 배열 prices가 매개변수로 주어질 때, 가격이 떨어지지 않은 기간은 몇 초인지를 return 하도록 solution 함수를 완성하세요.

---

### 제한사항

  - prices의 각 가격은 1 이상 10,000 이하인 자연수입니다.

  - prices의 길이는 2 이상 100,000 이하입니다.

---

### 입출력 예

|     prices      |     return      |
| :-------------: | :-------------: |
| [1, 2, 3, 2, 3] | [4, 3, 1, 1, 0] |

---

### 입출력 예 설명

  - 1초 시점의 ₩1은 끝까지 가격이 떨어지지 않았습니다.

  - 2초 시점의 ₩2은 끝까지 가격이 떨어지지 않았습니다.

  - 3초 시점의 ₩3은 1초뒤에 가격이 떨어집니다. 따라서 1초간 가격이 떨어지지 않은 것으로 봅니다.

  - 4초 시점의 ₩2은 1초간 가격이 떨어지지 않았습니다.

  - 5초 시점의 ₩3은 0초간 가격이 떨어지지 않았습니다.

---

### 문제 접근

  - O(n<sup>2</sup>)으로 해결

  - 2개의 for문을 수행하며 각 주식의 가격별로 `count`를 메기고, 주식의 가격이 높아지면 `break` 후 push_back

---

### 다른 사람의 풀이

  - `stack`으로 해결

  ```cpp
  #include <string>
  #include <vector>
  #include <stack>

  using namespace std;

  vector<int> solution(vector<int> prices) {
      vector<int> answer(prices.size());
      stack<int> s;
      int size = prices.size();
      for(int i=0;i<size;i++){
          while(!s.empty()&&prices[s.top()]>prices[i]){
              answer[s.top()] = i-s.top();
              s.pop();
          }
          s.push(i);
      }
      while(!s.empty()){
          answer[s.top()] = size-s.top()-1;
          s.pop();
      }
      return answer;
  }

  ```