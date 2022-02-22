# `Introduction to Graph`

1. A graph data structure is a collection of the nodes that have data and are connected to other nodes.
2. The relationship between the nodes is known as edge.
3. And the graph consists of the vertices & edges.

# `Graph Terminology`

### `Adjacency`

1. A vertex is said to be adjacent to another vertex if there is an edge connecting them.

### `Path`

1. A sequence of edges that allows you to go from vertex A to vertex B.

# `Graph Representation`

### `Adjacency Matrix`

- An adjacency matrix is a 2D array of V x V vertices. Each row and column represent a vertex.
- If the value of any element `a[i][j]` is 1, it represents that there is an edge connecting vertex i and vertex j.
- Space Complexity : `O(n^2)`
- We use it, when we have to represent the dense graph.

### `Adjacency List`

- An adjacency list represents a graph as an array of linked lists.
- The index of the array represents a vertex and each element in its linked list represents the other vertices that form an edge with the vertex.
- Space Complexity : `O(n+2e)` where e is the edge.
- We use it, when we have to represent the sparse graph.

# `Graph Traversals`

### `Depth First Search (DFS)`

1. Depth First Search algorithm traverses a graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration.

### `Breadth First Search (BFS)`

1. Breadth First Search (BFS) algorithm traverses a graph in a breadthward motion and uses a queue to remember to get the next vertex to start a search, when a dead end occurs in any iteration.
