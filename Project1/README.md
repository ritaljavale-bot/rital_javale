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

##Modified version
smart token management system (queue+stack)
### Smart Canteen Order and Token Management System
Unit 3 — Stack and Queue using Linked List | C++

### 1. Problem Statement
Develop a Smart Canteen Order and Token Management System using Stack and Queue implemented with linked lists. The Queue is used to manage customer food-order tokens according to the FIFO (First In, First Out) principle, ensuring that the customer who places an order first is served first. The Stack is used to manage the most recently placed order for undo operations, following the LIFO (Last In, First Out) principle. The system should allow staff to add tokens, serve customers, search for tokens, display pending tokens, view the latest order and undo the latest order.

### 2. Definitions
Stack: A linear data structure in which insertion and deletion take place at the same end, called TOP. It follows the LIFO principle.
Queue: A linear data structure in which insertion takes place at the REAR and deletion takes place at the FRONT. It follows the FIFO principle.
Singly Linked List: A dynamic data structure made up of nodes, where each node contains data and a pointer to the next node.

### 3. Objectives
* To implement Stack and Queue using linked lists.
* To add food-order tokens dynamically.
* To serve customers in FIFO order.
* To manage the latest order using Stack and LIFO.
* To search for a token and display pending orders.
* To understand the real-world application of Stack and Queue.

### 4. Data Structures Used
* Queue: `front` and `rear` pointers for managing customer tokens.
* Stack: `top` pointer for managing the latest orders.
* Node: Stores the token number and pointer to the next node.
* Dynamic memory allocation: Uses `new` and `delete`.

### 5. Operations Performed
| Operation | Data structure | Purpose |
| --- | --- | --- |
| Add Token | Queue | Add a token at the rear |
| Serve Token | Queue | Remove the first token |
| Search Token | Queue | Find a pending token |
| Display Tokens | Queue | Show all pending tokens |
| Undo Latest Order | Stack | Remove the latest order |
| View Latest Order | Stack | Display the top order |

### 6. Algorithm
* Start.
* Initialize `front = NULL`, `rear = NULL` and `top = NULL`.
* Add a new token to the rear of the Queue.
* Push the new order onto the Stack.
* Search for a token by traversing the Queue.
* Serve the first customer by deleting the front node.
* Display all pending tokens.
* View the latest order using the Stack's PEEK operation.
* Undo the latest order using POP.
* Stop.

### 7. Flowchart
### Flowchart
START →
Initialize Stack and Queue →
Add New Food-Order Token →
Enqueue to Queue and Push onto Stack →
Search Token Using Token Number →
Is Token Found? →
YES → Display Token Pending →
Serve Token? →
YES → Delete First Node from Queue (FIFO) →
Stack Operation →
PEEK → View Latest Order →
POP → Undo Latest Order →
Display Pending Tokens →
STOP
NO → Display Token Not Found →
Display Pending Tokens →
STOP
### Expected Output
```text
SMART CANTEEN MANAGEMENT SYSTEM

--- QUEUE OPERATIONS ---
Token added: 101
Token added: 102
Token added: 103
Pending Tokens: 101 -> 102 -> 103 -> NULL
Token 102 is pending.
Serving token: 101
Pending Tokens: 102 -> 103 -> NULL

--- STACK OPERATIONS ---
Order pushed: 101
Order pushed: 102
Order pushed: 103
Stack (Top to Bottom): 103 -> 102 -> 101 -> NULL
Top order: 103
Popped order: 103
Stack (Top to Bottom): 102 -> 101 -> NULL
```

### 9. Time Complexity
| Operation | Time complexity |
| --- | --- |
| Enqueue | O(1) |
| Dequeue | O(1) |
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| Search | O(n) |
| Display | O(n) |
| Space complexity | O(n) |

### 10. Conclusion
The Smart Canteen Order and Token Management System demonstrates the combined use of Stack and Queue using linked lists in C++. The Queue follows FIFO to serve customers in order, while the Stack follows LIFO to manage the latest orders. This project explains dynamic memory allocation, pointers, insertion, deletion and traversal through a practical canteen application.
