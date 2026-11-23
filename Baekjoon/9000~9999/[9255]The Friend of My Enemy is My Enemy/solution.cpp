#include <iostream>
#include <vector>

using namespace std;

#define endl "\n"

vector<vector<bool>> relation;
int K, n, m, s;

vector<int> solution(vector<vector<bool>>& rel, int n, int target);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> K;

    for(int k = 0; k < K; k++){
        cin >> n >> m;

        vector<int> res;
        relation = vector<vector<bool>>(n, vector<bool>(n, false));

        for(int i = 0; i < m; i++){
            int a, b;

            cin >> a >> b;

            relation[a - 1][b - 1] = true;
            relation[b - 1][a - 1] = true;
        }

        cin >> s;

        res = solution(relation, n, s - 1);

        cout << "Data Set " << k + 1 << ":" << endl;

        for(int r : res){
            cout << r << " ";
        }

        cout << endl << endl;
    }

    return 0;
}

vector<int> solution(vector<vector<bool>>& rel, int n, int target){
    vector<int> res;

    for(int i = 0; i < n; i++){
        if(rel[target][i]){
            res.push_back(i + 1);
        }
    }

    return res;
}