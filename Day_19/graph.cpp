#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Edge {
private:
    int src, dest, weight;

public:
    Edge(int u, int v, int w) : src(u), dest(v), weight(w) {}

    int getSource() { return src; }
    int getDest() { return dest; }
    int getWeight() { return weight; }
};

class Graph {
private:
    int V, E;
    vector<Edge> edge;
    vector<int> dist;

public:
    Graph(int vertices, int edges) : V(vertices), E(edges) {}

    void addEdge(int u, int v, int w) {
        Edge e(u, v, w);
        edge.push_back(e);
    }

    void printArr() {
        cout << "Vertex Distance from Source\n";
        for (int i = 0; i < V; ++i)
            cout << i << "\t\t" << dist[i] << "\n";
    }

    void BellmanFord(int src) {
        dist.resize(V, INT_MAX);
        dist[src] = 0;

        for (int i = 0; i < V - 1; i++) {
            for (int j = 0; j < E; j++) {
                int u = edge[j].getSource();
                int v = edge[j].getDest();
                int weight = edge[j].getWeight();

                if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                    dist[v] = dist[u] + weight;
            }
        }

        for (int i = 0; i < E; i++) {
            int u = edge[i].getSource();
            int v = edge[i].getDest();
            int weight = edge[i].getWeight();

            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                cout << "Graph contains negative weight cycle\n";
                return;
            }
        }

        printArr();
    }
};

int main() {
    int V = 5;
    int E = 8;
    Graph g(V, E);

    g.addEdge(0, 1, -1);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 2);
    g.addEdge(3, 2, 5);
    g.addEdge(3, 1, 1);
    g.addEdge(4, 3, -3);

    g.BellmanFord(0);

    return 0;
}