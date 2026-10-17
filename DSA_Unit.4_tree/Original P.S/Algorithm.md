## Algorithm

1. Start.
2. Read the number of level-order entries and the node values.
3. Construct the binary tree, using N for missing children.
4. If the current node is NULL, return true.
5. Check whether the left child is smaller than the current node.
6. Check whether the right child is greater than the current node.
7. Recursively validate the left and right subtrees.
8. If all checks pass, display "The given tree is a valid BST."
9. Otherwise, display "The given tree is NOT a valid BST."
10. Stop.
