#include <iostream>
#include <vector>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define endl "\n"

using namespace std;

vector<vector<int>> res;
int a, b, c;

int main() {
    fastio;

    cin >> a >> b >> c;

    for (int i = 1; i < 11; i++) {
        vector<int> sol;

        for (int j = 1; j < 11; j++) {
            if (a * i + b * j == c) {
                sol.push_back(j);
            }
        }

        if (sol.empty()) {
            sol.push_back(0);
        }

        res.push_back(sol);
    }

    for (long unsigned int i = 0; i < res.size(); i++) {
        for (long unsigned int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}