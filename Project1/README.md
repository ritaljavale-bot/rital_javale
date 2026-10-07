# Smart Canteen Token Management System

### Problem Statement
Develop a Smart Canteen Token Management System using a Singly Linked List to efficiently manage food-order tokens. In a canteen, customers are given tokens when they place their food orders. The token received first should be served first, following the FIFO (First In, First Out) principle. The system should allow the canteen staff to add new food-order tokens, serve the first pending token, search for a particular token, and display all pending tokens. A singly linked list is used because tokens can be added dynamically without requiring a fixed amount of memory.

### Objective
1. To implement a singly linked list for managing canteen food-order tokens.
2. To add new food-order tokens dynamically at the end of the list.
3. To serve the first pending token and remove it from the list.
4. To search for a particular token number in the linked list.
5. To display all the pending food-order tokens.
6. To understand the practical application of linked lists in a real-world canteen management system.

### Data Structure Used
- Singly Linked List
- Each node contains Token Number and Next pointer
- Dynamic memory allocation is used

### Operation Performed
1. Add Token - Insert the new token into the linked list at the end.
2. Search Token - Traverse the linked list to search for a token using its Token Number.
3. Serve Token - Delete the first pending token from the list as per FIFO.
4. Display Tokens - Traverse and display all remaining pending tokens.

### Algorithm
Step 1: Start.
Step 2: Define a Node with Token Number and Next pointer.
Step 3: Initialize head = NULL.
Step 4: Insert the new food-order token into the linked list at the end.
Step 5: Traverse the linked list to search for a token using its Token Number.
Step 6: If the token is found, display token details; otherwise, display Token Not Found.
Step 7: To serve a token, check if list is empty, if not, delete the first node (FIFO).
Step 8: Traverse the linked list and display all remaining available tokens.
Step 9: Stop.

### Flowchart
START → Initialize Linked List with head=NULL → Add New Food-Order Token at End → Search Token Using Token Number → Is Token Found?

YES → Display Token Pending → Serve Token? → YES → Delete First Node (FIFO) → Display Available Tokens → STOP

NO → Display Token Not Found → Display Available Tokens → STOP

### Expected Output
```
Smart Canteen Token Management System

Pending Tokens: 101 -> 102 -> 103 -> 104 -> NULL

Searching for Token 103...
Token 103 is pending.

Serving Token 101...
Token Served Successfully.

Pending Tokens After Serving:
102 -> 103 -> 104 -> NULL
```

### Concept Use
- Structure and Pointers
- Dynamic Memory Allocation (new, delete)
- Linked List Insertion, Traversal, Deletion
- FIFO Principle

### Time Complexity
- Add Token: O(n)
- Search Token: O(n)
- Serve Token: O(1)
- Display Tokens: O(n)
- Space Complexity: O(n)

### Language and Conclusion
**Language Used:** C++

**Conclusion:** The Smart Canteen Token Management System efficiently manages food orders using a singly linked list. It follows FIFO principle, uses dynamic memory, and is easy to implement for real-world canteen management. This project demonstrates the practical use of linked lists in data structures.
