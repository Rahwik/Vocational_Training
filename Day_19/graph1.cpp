#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Graph {
private:
    int V;
    vector<vector<pair<int, int>>> adj;

public:
    Graph(int vertices) : V(vertices) {}

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
    }

    void Dijkstra(int src) {
        vector<int> dist(V, INT_MAX);
        vector<bool> visited(V, false);

        dist[src] = 0;

        for (int i = 0; i < V - 1; i++) {
            int u = -1;
            for (int j = 0; j < V; j++) {
                if (!visited[j] && (u == -1 || dist[j] < dist[u]))
                    u = j;
            }

            visited[u] = true;

            for (auto edge : adj[u]) {
                int v = edge.first;
                int weight = edge.second;

                if (!visited[v] && dist[u] + weight < dist[v])
                    dist[v] = dist[u] + weight;
            }
        }

        cout << "Vertex Distance from Source\n";
        for (int i = 0; i < V; ++i)
            cout << i << "\t\t" << dist[i] << "\n";
    }
};

int main() {
    int V = 5;
    Graph g(V);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 1);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 1, 2);
    g.addEdge(2, 3, 5);
    g.addEdge(3, 4, 3);

    g.Dijkstra(0);

    return 0;
}