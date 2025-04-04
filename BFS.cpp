#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// Function to perform BFS and print reachable nodes from the given start node
void BFS(const vector<vector<int> >& adjList, int startNode) {
    int n = adjList.size();
    vector<bool> visited(n, false);
    queue<int> q;

    // Start BFS from the startNode
    visited[startNode] = true;
    q.push(startNode);
     cout << "Nodes reachable from node " << startNode << ": ";
      while (!q.empty()) {
            int node = q.front();
        q.pop();
      cout << node << " ";

        // Traverse all adjacent nodes
         for (size_t i = 0; i < adjList[node].size(); ++i) {
                int neighbor = adjList[node][i];
         if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;
    vector<vector<int> > adjList(V);
    cout << "Enter the edges (source destination):" << endl;
    for (int i = 0; i < E; ++i) {
            int u, v;
    cin >> u >> v;
    adjList[u].push_back(v);
        // For an undirected graph, also add the reverse edge:
        // adjList[v].push_back(u);
    }     int startNode;
    cout << "Enter the starting node: ";
     cin >> startNode;
     if (startNode >= 0 && startNode < V) {
        BFS(adjList, startNode);
    } else {
         cout << "Invalid starting node." << endl;
    }     return 0;
}


