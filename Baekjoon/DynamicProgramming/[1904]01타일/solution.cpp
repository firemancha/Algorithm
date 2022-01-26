#include <iostream>
#include <vector>

using namespace std;

#define endl "\n"
#define MOD 15746;

vector<int> dp;
int N;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  dp = vector<int>(N + 1, 0);
  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= N; i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

  cout << dp[N] << endl;

  return 0;
}