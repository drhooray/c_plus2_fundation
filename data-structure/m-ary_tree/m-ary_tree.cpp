#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Vec;

void dfs(int val) {
    cout << val << " ";
    for (const int& node: Vec[val]) {
        dfs(node);
    }
}

int main() {
    int u, v, N, E;
    cin >> N >> E;
    Vec.resize(N+1);

    while (E--) {
        cin >> u >> v;
        Vec[u].push_back(v);
    }
    dfs(1);
    return 0;
}

/* in put data 
 *
 * 7 6 //node edge
 * 1 2
 * 1 3
 * 2 4
 * 2 5
 * 2 6
 * 3 7
 * out put :
 * 1 2 4 5 6 3 7
 */
