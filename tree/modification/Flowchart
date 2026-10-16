flowchart TD
    A([Start]) --> B[Read number of level-order entries and values]
    B --> C[Construct binary tree using N for missing children]
    C --> D[Initialize root with no min and max bound]
    D --> E{Is current node NULL?}
    E -- Yes --> F[Return True]
    E -- No --> G{Does node violate min or max bound?}
    G -- Yes --> H[Record node's value]
    H --> I[Return False]
    G -- No --> J[Validate left subtree with current node as upper bound]
    J --> K{Is left subtree valid?}
    K -- No --> I
    K -- Yes --> L[Validate right subtree with current node as lower bound]
    L --> M{Is right subtree valid?}
    M -- No --> I
    M -- Yes --> F
    F --> N{Are all nodes valid?}
    N -- Yes --> O[Display Tree is a valid BST]
    N -- No --> P[Display Tree is invalid and print first violating node]
    I --> N
    O --> Q([Stop])
    P --> Q
