# 1. Problem Statement

To develop a C++ program that verifies whether a given binary tree is a valid Binary Search Tree (BST). The program constructs a binary tree from level-order input, where N indicates a null or missing node, and checks whether the tree follows the BST ordering rules. Each node must have values smaller than itself in its left subtree and greater than itself in its right subtree. The program then displays whether the given binary tree satisfies the conditions of a valid BST.

## 2. Approach

1. Read the number of entries and the level-order representation of the binary tree.
2. Construct the binary tree using a queue.
3. Start validating the tree from the root node.
4. Check whether the values in the left and right subtrees satisfy the BST property.
5. Recursively validate the left and right subtrees.
6. Display whether the given binary tree is a valid BST or not.

## 3. Complexity Analysis

- Time Complexity: \\(O(n)\\) — Each node is visited once during validation, where \\(n\\) is the number of nodes in the tree.
- Space Complexity: \\(O(n)\\) — The queue used for tree construction and the recursive call stack may require linear space in the worst case.

## 5. Conclusion

The program checks whether a given binary tree satisfies the properties of a Binary Search Tree. It constructs the tree from level-order input and uses recursive validation to check the relationships between nodes. This program demonstrates the use of binary trees, queues, recursion, and BST validation.

Important: The original approach that compares only a node with its direct children is not sufficient to validate every BST. A correct solution must also check the constraints inherited from all ancestors.
