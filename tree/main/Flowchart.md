
flowchart TD
    A([Start]) --> B[Read tree input]
    B --> C[Construct binary tree]
    C --> D{Is current node NULL?}
    D -- Yes --> E[Return True]
    D -- No --> F{Direct children satisfy BST rule?}
    F -- No --> G[Return False]
    F -- Yes --> H[Check left and right subtrees]
    H --> I{Both subtrees valid?}
    I -- Yes --> E
    I -- No --> G
    E --> J[Display result]
    G --> J
    J --> K([Stop])

