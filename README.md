# Graph Traversal with DFS and BFS
<br>
This repository contains the implementation of a simple undirected graph and two graph traversal algorithms: Depth-First Search (DFS) and Breadth-First Search (BFS).
<br>
<h2>Graph Overview</h2>
<br>
In this implementation, the graph is represented using an adjacency list, where each vertex has a list of its neighboring vertices. The graph is initialized with specified number of vertices, and edges are added between pairs of vertices.
<br>
The example graph used for traversal has 5 vertices(0-4) and the following edges:
0 - 1 <br>
0 - 2 <br>
1 - 3 <br>
1 - 4 <br>
<br>
<h3>Depth-First Search (DFS) Traversal</h3>
Process:<br>
Depth-First Search (DFS) is a graph traversal algorithm that starts from a given vertex and explores as far along each branch as possible before backtracking. The algorithm uses a stack to keep track of the vertices to visit.<br>
Steps: <br>
1. Start at the specified starting vertex.<br>
2. Mark the vertex as visited and output it.<br>
3. Visit an unvisited neighboring vertex and repeat the process.<br>
4. If no unvisited neighbors exist, backtrack to the previous vertex and continue until all vertices are visited.<br>
<br>
In DFS, you traverse deeply into each branch (left to right) before backtracking, which explains the order in which the vertices are visited.
<br>
<h3>Breadth-First Search (BFS) Traversal</h3>
Process: <br>
Breadth-First Search (BFS) is another graph traversal algorithm that starts from a given vertex and explores all of its neighbors before moving on to the next level of neighbors. BFS uses a queue to keep track of vertices.
Steps: <br>
1. Start at the specified starting vertex.<br>
2. Mark the vertex as visited and enqueue it.<br>
3. Dequeue a vertex from the queue and visit all its unvisited neighbors, enqueuing them.<br>
4. Continue until the queue is empty.<br>
<br>
In BFS, you explore all vertices at the current level before moving on to the next level, which is why the traversal follows a more level-wise pattern.