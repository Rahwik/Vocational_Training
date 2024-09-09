#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int cheapFlight(int n, vector<vector<int>> &f, int s, int d, int k) {
    vector<vector<pair<int, int>>> g(n);
    for (auto &x : f) {
        g[x[0]].push_back({x[1], x[2]});
    }

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> q;
    q.push({0, s, 0});

    vector<int> stop(n, INT_MAX);
    stop[s] = 0;

    while (!q.empty()) {
        auto [c, u, step] = q.top();
        q.pop();

        if (u == d) {
            return c;
        }

        if (step > k) {
            continue;
        }

        for (auto &[v, w] : g[u]) {
            if (step + 1 <= stop[v]) {
                stop[v] = step + 1;
                q.push({c + w, v, step + 1});
            }
        }
    }

    return -1;
}

int main() {
    int n = 4;
    vector<vector<int>> f = {{0, 1, 100}, {1, 2, 100}, {2, 0, 100}, {1, 3, 600}, {2, 3, 200}};
    int s = 0, d = 3, k = 1;
    cout << cheapFlight(n, f, s, d, k);
}
