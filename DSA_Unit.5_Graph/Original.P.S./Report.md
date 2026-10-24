## Problem Statement

Develop a C++ program to represent cities as vertices and roads as weighted edges with non-negative distances. Apply Dijkstra's algorithm from a selected source city to find the shortest distance to every reachable city. Reconstruct and display the shortest path to a destination selected by the user.

## Approach

1. Represent cities and roads using a weighted graph and an adjacency list.
2. Initialize the distance of every city to infinity and set the source city's distance to zero.
3. Use a priority queue to process the city with the minimum distance.
4. Update the shortest distances and parent array whenever a shorter path is found.
5. Display the shortest distances to all reachable cities.
6. Reconstruct and display the shortest path to the selected destination using the parent array.

## Complexity Analysis

Let **V** represent the number of cities (vertices) and **E** represent the number of roads (edges).

* **Time Complexity:** `O((V + E) log V)` using an adjacency list and a priority queue.
* **Space Complexity:** `O(V + E)` for storing the graph, distances, parents, and priority queue.

## Conclusion

Dijkstra's algorithm efficiently finds the shortest distances from a source city to all reachable cities in a weighted graph with non-negative edge weights. The program also reconstructs the shortest path to a selected destination. This algorithm is useful in road navigation, transportation networks, and route-planning applications.
