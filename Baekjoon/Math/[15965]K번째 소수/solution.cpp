#include <iostream>
#include <vector>

using namespace std;

#define endl "\n"
#define MAX 10000001

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<bool> eratos(MAX, true);

  int k;

  eratos[0] = eratos[1] = false;
  for (int i = 2; i * i < MAX; i++) {
    if (!eratos[i]) continue;
    for (int j = i + i; j < MAX; j += i) {
      eratos[j] = false;
    }
  }

  cin >> k;

  for (int i = 0; i < MAX; i++) {
    if (eratos[i]) k--;
    if (k == 0) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}