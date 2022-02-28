# `Introduction to Graph`

1. Graphs are non-linear data structures comprising a finite set of nodes and edges. The nodes are the elements, and edges are connections between the nodes.

# `Graph Terminology`

### `Vertex`

1. Each node of the graph is represented as a vertex.

### `Edge`

1. Edge represents the path between two vertices.

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

# `Types of Edges in DFS Traversals`

### `Tree Edge`

1. It is an edge which is present in the tree obtained after applying DFS on the graph.

### `Forward Edge`

1. It is an edge (x,y) where y appears after the x and there is a path from x to y.

### `Backward Edge`

1. It is an edge (x,y) where y appears before the x and there is a path from y to x.

### `Cross Edge`

1. It is an edge (x,y) where there is no path from y to x or vice-versa.

# `Spanning Tree`

### `Introduction`

1. A spanning tree is a sub-graph of an undirected connected graph, which incudes all the vertices of the graph with the minimum possible number of edges.

### `General Properties`

1. Total Vertices : `v' = v`
2. Total Edges : `e' = v - 1`
3. The maximum number of edges we can remove to construct the spanning tree : `e - v + 1`
4. The maximum number if the spanning trees that a complete graph can have : `n ^ ( n - 2 )`
5. A connected graph can have more than one spanning tree.
6. All the possible spanning trees of the graph, have the same number of edges and vertices.
7. The spanning tree doesnot have any cycle(loops).
8. Removing one edge from the ST makes it disconnected.
9. Adding one edge to the spanning tree will create it a loop.

# `Minimum Spanning Tree`

### `Introduction`

1. A minimum spanning tree is a spanning tree in which the sum of the weight of the edges is as minimum as possible.

# `Prim's Algorithms`

### `Introduction`

1. A Prim’s Algorithm is an algorithm for finding the minimum spanning tree which takes the graph as an input and finds the subset of the edges of that graph which
   - form a tree that includes every vertex
   - and has the minimum sum of weights among all the trees that can be formed from the graph.

### `Steps`

1. Remove all the loops and parallel edges (keep that edge which has the least cost associated and remove all others).
2. Choose any arbitrary node as root node.
3. Check all the outgoing edges and select the one with the less edge weight.
4. Repeat the steps until we reach the minimum edge weight.

# `Kruskal's Algorithms`

### `Introduction`

1. A Kruskal’s algorithm is an algorithm for finding the MST which takes the graph as an input and finds the subset of the edges of that graph which
   - form a tree that includes every vertex.
   - has the minimum sum of weights among all the trees that can be formed from the graph.

### `Steps`

1. Remove all the loops and parallel edges(keep that edges which has the less edge weight).
2. Arrange all the edges in their increasing order of weight.
3. Keep on adding the edges starting from the least weight (Note : If the edge form the loop while adding, then remove it).
4. Repeat the process till it reaches to the last.
