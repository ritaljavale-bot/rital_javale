## Algorithm 

```mermaid
flowchart TD
    A([Start]) --> B[/Input number of cities and roads/]
    B --> C[Create weighted graph]
    C --> D[/Enter road details and weights/]
    D --> E[/Enter source city/]
    E --> F[Initialize distances to infinity]
    F --> G[Set source distance to zero]
    G --> H[Find unvisited city with minimum distance]
    H --> I{Reachable unvisited city exists?}
    I -- Yes --> J[Mark city as visited]
    J --> K[Update neighboring city distances]
    K --> H
    I -- No --> L[Display shortest distances]
    L --> M{Select modification}
    M -- A --> N[Change source city]
    N --> F
    M -- B --> O[Enter destination city]
    O --> P[Display complete shortest path]
    P --> M
    M -- C --> Q[Enter road and new weight]
    Q --> R[Update edge weight]
    R --> F
    M -- Exit --> S([Stop])
