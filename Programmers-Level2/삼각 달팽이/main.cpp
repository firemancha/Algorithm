#include "solution.h"

template <typename T>
void printAnswer(vector<T> result);

int main() {
  printAnswer(solution(4));

  printAnswer(solution(5));

  printAnswer(solution(6));

  return 0;
}

template <typename T>
void printAnswer(vector<T> result) {
  for (int i = 0; i < result.size(); i++) {
    if (i == 0) {
      cout << "[";
    }
    if (i + 1 == result.size()) {
      cout << result[i] << "]" << endl;
      break;
    }
    cout << result[i] << ", ";
  }
}