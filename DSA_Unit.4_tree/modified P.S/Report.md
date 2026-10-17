# BST Validation Using Minimum and Maximum Bounds with First Violating Node Detection

## 1. Problem Statement

Modify the original BST Validation program to validate a given binary tree using minimum and maximum allowed value bounds inherited from its ancestors. The program should determine whether the given binary tree satisfies the Binary Search Tree (BST) property at every node.

If the tree is invalid, the program should identify and display the first node that violates the BST ordering rules. The program must reject duplicate values and display the appropriate validation result.

## 2. Approach

1. Construct the binary tree using level-order input, where `N` represents a missing child.
2. Use a recursive validation function to check each node against its minimum and maximum allowed bounds.
3. Initially, the root has no lower or upper bound.
4. For the left subtree, set the current node's value as the upper bound.
5. For the right subtree, set the current node's value as the lower bound.
6. If a node violates its allowed bounds, record its value and declare the tree invalid.
7. Check the left subtree before the right subtree to identify the first violation encountered.
8. If all nodes satisfy their bounds, declare the tree a valid BST.

Duplicate values are not allowed.

## 3. Complexity Analysis

Let `n` be the number of nodes in the binary tree and `h` be its height.

- **Time Complexity:** `O(n)` — Each node is visited at most once during validation.
- **Auxiliary Space Complexity:** `O(h)` — Recursive function calls require stack space proportional to the tree height.
- **Tree Storage Complexity:** `O(n)` — Memory is required to store all nodes of the binary tree.

In the worst case, a highly skewed tree requires `O(n)` auxiliary recursion space.

## 4. Conclusion

The combined modification improves the original BST Validation program by checking every node using minimum and maximum bounds inherited from its ancestors and identifying the first node that violates the BST property. It also rejects duplicate values and detects violations that direct parent-child comparisons may miss. Therefore, the modified program provides a more reliable and informative BST validation result.
