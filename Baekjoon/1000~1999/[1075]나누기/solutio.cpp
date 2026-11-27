#include <iomanip>
#include <iostream>

using namespace std;

#define endl "\n"
#define fastio cin.tie(0)->ios::sync_with_stdio(0)

int N, F, res;

int main() {
    fastio;

    cin >> N >> F;

    for (int i = 0; i < 100; i++) {
        int newN = N / 100 * 100 + i;

        if (newN % F == 0) {
            res = i;
            break;
        }
    }

    cout << setw(2) << setfill('0') << res << endl;

    return 0;
}