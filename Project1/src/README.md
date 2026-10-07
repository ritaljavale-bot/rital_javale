# Unit 3 – Linked List
## Problem Statement: Smart Canteen Token Management System

Develop a Smart Canteen Token Management System using a Singly Linked List to efficiently manage food-order tokens. In a canteen, customers are given tokens when they place their food orders. The token received first should be served first, following the FIFO (First In, First Out) principle.

The system should allow the canteen staff to add new food-order tokens, serve the first pending token, search for a particular token, and display all pending tokens. A singly linked list is used because tokens can be added dynamically without requiring a fixed amount of memory.

### Objective
1. To implement a singly linked list for managing canteen food-order tokens.
2. To add new food-order tokens dynamically at the end of the list.
3. To serve the first pending token and remove it from the list.
4. To search for a particular token number in the linked list.
5. To display all the pending food-order tokens.
6. To understand the practical application of linked lists in a real-world canteen management system.

### Data Structure Used
- Singly Linked List
- Each Node contains: token number and next pointer
- Dynamic memory allocation (new, delete)

### Operation Performed
1. Add Token - Insert new food-order token at the end of linked list.
2. Search Token - Traverse the linked list to search for a token using its Token Number.
3. Serve Token - Delete the first node from the list as per FIFO.
4. Display Tokens - Traverse and display all remaining pending tokens.

### Algorithm
Step 1: Start the program.
Step 2: Define a node containing two fields: the token number and a pointer to the next node.
Step 3: Initialize the linked list with head = NULL.
Step 4: Insert the new token into the linked list at the end.
Step 5: Traverse the linked list to search for a token using its Token Number.
Step 6: If the Token Number is found, display the token details; otherwise, display "Token Not Found".
Step 7: To serve a token, locate the first node and delete it (
