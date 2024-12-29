#include "graph.hpp"

int main(){
    int vertice = 5;
    vector<pair<int, int>> edge = {{0, 1}, {0, 4}, {1, 2}, {1, 3}, {3, 4}};

    Graph g(vertice);
    for(auto& i : edge){
        g.addEdge(i.first, i.second);
    }

    cout << "Graph Structure (Adjacency List):" << endl;
    g.display();

    cout << "DFS (Iterative) from Vertex 0:" << endl;
    g.dfs(0);

    cout << "BFS from Vertex 0:" << endl;
    g.bfs(0);
}