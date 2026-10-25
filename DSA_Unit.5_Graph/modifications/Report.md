## 1. Problem Statement

Develop a C++ program to represent machines as vertices and communication links as weighted edges with non-negative distances. Apply Dijkstra's algorithm to find the shortest distances from a selected source machine to all other machines. Modify the program to allow changing the source machine, displaying the complete shortest path to a destination machine, and updating a communication link's distance before recalculating the shortest distances.

## 2. Approach

The program represents the network of machines using a weighted adjacency matrix. Each machine is represented as a vertex, and each communication link is represented as an edge with a distance.

Dijkstra's algorithm is used to calculate the shortest distances from the selected source machine. The program repeatedly selects the unvisited machine with the minimum distance and updates the distances of its connected machines.

The program includes three modifications:

1. **Change Source Machine:** Allows the user to select a different source and recalculate the shortest distances.
2. **Display Shortest Path:** Displays the complete path from the source machine to the destination machine along with the total distance.
3. **Update Communication Link:** Allows the user to change the distance of an existing link and recalculate the shortest distances.

## 3. Complexity Analysis

Let **V** represent the number of machines (vertices) and **E** represent the number of communication links (edges).

* **Time Complexity:** O(V²), because the program repeatedly searches for the unvisited machine with the minimum distance.
* **Space Complexity:** O(V²), because the adjacency matrix stores the distances between all pairs of machines.

## 4. Conclusion

Dijkstra's algorithm efficiently finds the shortest distances between machines in a communication network when all link distances are non-negative. The program also allows the user to change the source machine, display the complete shortest path to a destination, and update communication link distances. These features make the program useful for understanding shortest-path calculations in weighted networks.
