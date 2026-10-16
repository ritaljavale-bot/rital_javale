# Algorithm -BST validation

1. Start.
2. Read the number of level-order entries and their values.
3. Construct the binary tree, using N for missing children.
4. Initialize the root with no minimum or maximum bound.
5. If the current node is NULL, return true.
6. Check whether the node violates its minimum or maximum bound.
7. If a violation occurs, record the node's value and return false.
8. Validate the left subtree with the current node as its upper bound.
9. Validate the right subtree with the current node as its lower bound.
10. If all nodes satisfy their bounds, display that the tree is a valid BST.
11. Otherwise, display that the tree is invalid and print the first violating node.
12. Stop.
