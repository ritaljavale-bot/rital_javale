flowchart TD
    A[START] --> B[Initialize List]
    B --> C[Add New Token]
    C --> D[Display Token List]
    D --> E[Serve First Token]
    E --> F[Search for Token]
    F --> G{Token Found?}
    G -- Yes --> H[Display Details]
    G -- No --> I[Token Not Found]
    H --> J[Display Updated List]
    I --> J
    J --> K[STOP]
