#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

class Graph{
    private: 
        int vertice;
        vector<vector<int>> adjlist;
    public:
        Graph(int vertice){
            this->vertice = vertice;
            adjlist.resize(vertice); // to ensure adjlist has sufficeient number
        }

        void addEdge(int v1, int v2){
            adjlist[v1].push_back(v2);
            adjlist[v2].push_back(v1);
        }

        void display(){
            for(int i = 0; i < vertice; i++){
                cout << i << ": ";
                for(int j : adjlist[i]){
                    cout << j << " ";
                }
                cout << endl;
            }
        }

        // void dfsRecursive(int startVertex, bool visited[]){
        //     visited[startVertex] = true;
        //     cout << startVertex << " ";
        //     for(int neighbor : adjlist[startVertex]){
        //         if(!visited[neighbor]){
        //             dfsRecursive(neighbor, visited);
        //         }
        //     }
        // }

        void dfs(int startVertex){
            vector<bool> visited(vertice, false);
            stack<int> s;
            s.push(startVertex);

            while(!s.empty()){
                int currVertex = s.top();
                s.pop();
                if(!visited[currVertex]){
                    visited[currVertex] = true;
                    cout << currVertex << " ";
                    for(auto i = adjlist[currVertex].rbegin(); i != adjlist[currVertex].rend(); i++){
                        if(!visited[*i]){
                            s.push(*i);
                        }
                    }
                }
            }
        }

        void bfs(int startVertex){
            vector<bool> visited(vertice, false);
            queue<int> q;
            visited[startVertex] = true;
            q.push(startVertex);

            while(!q.empty()){
                int currVertex = q.front();
                q.pop();
                cout << currVertex << " ";

                for(int neighbor : adjlist[currVertex]){
                    if(!visited[neighbor]){
                        visited[neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }
        }
};