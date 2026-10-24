## Algorithm

1. Start.
2. Input the number of cities and roads.
3. Create an adjacency list to represent the weighted graph.
4. Input the road connections and their non-negative distances.
5. Input the source city and destination city.
6. Initialize all distances to infinity and parent values to `-1`.
7. Set the source city's distance to `0`.
8. Insert the source city into the priority queue.
9. Repeat while the priority queue is not empty:

   * Remove the city with the minimum distance.
   * Skip the city if its distance is outdated.
   * Visit all neighboring cities.
   * Calculate the new distance to each neighbor.
   * If the new distance is smaller, update the distance and parent arrays.
   * Insert the updated distance into the priority queue.
10. Display the shortest distances from the source city to all reachable cities.
11. Check whether the destination is reachable.
12. If reachable, reconstruct the shortest path using the parent array.
13. Display the shortest path and its total distance.
14. If unreachable, display an appropriate message.
15. Stop.
