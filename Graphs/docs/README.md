
A **greedy algorithm** is an approach for solving a problem by selecting the best option available at the moment. It doesn't worry whether the current best result will bring the overall optimal result. The algorithm never reverses the earlier decision even if the choice is wrong. It works in a top-down approach. This algorithm may not produce the best result for all the problems. It's because it always goes for the local best choice to produce the global best result.

## [Dijkstra's Algorithm](https://www.programiz.com/dsa/dijkstra-algorithm)
***Dijkstra's algorithm allows us to find the shortest path between any two vertices of a graph. It differs from the minimum spanning tree because the shortest distance between two vertices might not include all the vertices of the graph. Dijkstra's Algorithm works on the basis that any subpath B -> D of the shortest path A -> D between vertices A and D is also the shortest path between vertices B and D.***

Djikstra used this property in the opposite direction i.e we overestimate the distance of each vertex from the starting vertex. Then we visit each node and its neighbors to find the shortest subpath to those neighbors. The algorithm uses a greedy approach in the sense that we find the next best solution hoping that the end result is the best solution for the whole problem. Time Complexity: `O(E Log V)` where, `E` is the number of edges and `V` is the number of vertices. Space Complexity: `O(V)`

<img src="../assets/shortest-subpath.webp"  style="background-color:white">

---
- The very first step is to mark all nodes as unvisited, mark the picked starting node with a current distance of `0` and the rest nodes with `infinity`, Now, fix the starting node as the current node.
- For the current node, analyse all of its unvisited neighbours and measure their distances **by adding the current distance of the current node to the weight of the edge that connects the neighbour node and current node.** Compare the recently measured distance with the current distance assigned to the neighbouring node and make it as the new current distance of the neighbouring node.
- After that, consider all of the unvisited neighbours of the current node, mark the current node as visited,
- Choose the unvisited node that is marked with the **least distance**, fix it as the new current node, and repeat the process again. 

![Dijkstra's Algorithm](../assets/Dijkstra's%20Algorithm.gif)

---
## [Kruskal's Algorithm](https://www.programiz.com/dsa/kruskal-algorithm)
***Kruskal's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that graph which form a tree that includes every vertex and has the minimum sum of weights among all the trees that can be formed from the graph.***

It falls under a class of algorithms called **greedy algorithms** that find the local optimum in the hopes of finding a global optimum. We start from the edges with the **lowest weight** and keep adding edges until we reach our goal.
- Sort all the edges from low weight to high.
- Take the edge with the lowest weight and add it to the spanning tree. If adding the edge created a cycle, then reject this edge.
- Keep adding edges until we reach all vertices.

![Kruskal's Algorithm](../assets/Kruskal's%20Algorithm.gif)

---
## [Prim's Algorithm](https://www.programiz.com/dsa/prim-algorithm)
***Prim's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds the subset of the edges of that graph which form a tree that includes every vertex and has the minimum sum of weights among all the trees that can be formed from the graph.***

It falls under a class of algorithms called **greedy algorithms** that find the local optimum in the hopes of finding a global optimum. We start from one vertex and keep adding edges with the lowest weight until we reach our goal.
- Initialize the minimum spanning tree with a vertex chosen at random.
- Find all the edges that connect the tree to new vertices, find the minimum and add it to the tree
- Keep repeating step 2 until we get a minimum spanning tree
  
![Prim's Algorithm](../assets/Prim's%20Algorithm.gif)