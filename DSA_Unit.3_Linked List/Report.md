## Smart Canteen Order and Token Management System
Unit 3 — Stack and Queue using Linked List | C++

 ## Problem Statement
Develop a Smart Canteen Order and Token Management System using Stack and Queue implemented with linked lists. The Queue is used to manage customer food-order tokens according to the FIFO (First In, First Out) principle, ensuring that the customer who places an order first is served first. The Stack is used to manage the most recently placed order for undo operations, following the LIFO (Last In, First Out) principle. The system should allow staff to add tokens, serve customers, search for tokens, display pending tokens, view the latest order and undo the latest order.

## Definitions
Stack: A linear data structure in which insertion and deletion take place at the same end, called TOP. It follows the LIFO principle. Queue: A linear data structure in which insertion takes place at the REAR and deletion takes place at the FRONT. It follows the FIFO principle. Singly Linked List: A dynamic data structure made up of nodes, where each node contains data and a pointer to the next node.

## Objectives
To implement Stack and Queue using linked lists.
To add food-order tokens dynamically.
To serve customers in FIFO order.
To manage the latest order using Stack and LIFO.
To search for a token and display pending orders.
To understand the real-world application of Stack and Queue.
## Data Structures Used
Queue: front and rear pointers for managing customer tokens.
Stack: top pointer for managing the latest orders.
Node: Stores the token number and pointer to the next node.
Dynamic memory allocation: Uses new and delete.
## Operations Performed
Operation	Data structure	Purpose
Add Token	Queue	Add a token at the rear
Serve Token	Queue	Remove the first token
Search Token	Queue	Find a pending token
Display Tokens	Queue	Show all pending tokens
Undo Latest Order	Stack	Remove the latest order
View Latest Order	Stack	Display the top order
## Algorithm
Start.
Initialize front = NULL, rear = NULL and top = NULL.
Add a new token to the rear of the Queue.
Push the new order onto the Stack.
Search for a token by traversing the Queue.
Serve the first customer by deleting the front node.
Display all pending tokens.
View the latest order using the Stack's PEEK operation.
Undo the latest order using POP.
Stop.
## Flowchart
Flowchart
START → Initialize Stack and Queue → Add New Food-Order Token → Enqueue to Queue and Push onto Stack → Search Token Using Token Number → Is Token Found? → YES → Display Token Pending → Serve Token? → YES → Delete First Node from Queue (FIFO) → Stack Operation → PEEK → View Latest Order → POP → Undo Latest Order → Display Pending Tokens → STOP NO → Display Token Not Found → Display Pending Tokens → STOP

## Expected Output
SMART CANTEEN MANAGEMENT SYSTEM
```
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
## Time Complexity
Operation	Time complexity
Enqueue	O(1)
Dequeue	O(1)
Push	O(1)
Pop	O(1)
Peek	O(1)
Search	O(n)
Display	O(n)
Space complexity	O(n)
## Conclusion
The Smart Canteen Order and Token Management System demonstrates the combined use of Stack and Queue using linked lists in C++. The Queue follows FIFO to serve customers in order, while the Stack follows LIFO to manage the latest orders. This project explains dynamic memory allocation, pointers, insertion, deletion and traversal through a practical canteen application.
