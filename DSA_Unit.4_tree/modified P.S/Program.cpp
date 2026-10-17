
#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct Node {
    long long data;
    Node *left, *right;

    Node(long long value) {
        data = value;
        left = right = nullptr;
    }
};

// Create a tree from level-order input.
// N represents a missing child.
Node* createTree(vector<string>& a) {
    if (a.empty() || a[0] == "N")
        return nullptr;

    Node* root = new Node(stoll(a[0]));
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < (int)a.size()) {
        Node* cur = q.front();
        q.pop();

        if (i < (int)a.size() && a[i] != "N") {
            cur->left = new Node(stoll(a[i]));
            q.push(cur->left);
        }
        i++;

        if (i < (int)a.size() && a[i] != "N") {
            cur->right = new Node(stoll(a[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

// Modification 1: Record the first violating node.
// Modification 2: Validate using minimum and maximum bounds.
bool validateBST(Node* root,
                 bool hasMin, long long minValue,
                 bool hasMax, long long maxValue,
                 long long& badNode) {
    if (root == nullptr)
        return true;

    // Duplicate values are not allowed.
    if ((hasMin && root->data <= minValue) ||
        (hasMax && root->data >= maxValue)) {
        badNode = root->data;
        return false;
    }

    // All left-subtree values must be smaller.
    if (!validateBST(root->left,
                     hasMin, minValue,
                     true, root->data, badNode))
        return false;

    // All right-subtree values must be greater.
    if (!validateBST(root->right,
                     true, root->data,
                     hasMax, maxValue, badNode))
        return false;

    return true;
}

int main() {
    int n;
    cout << "Enter number of level-order entries: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input size.\n";
        return 0;
    }

    vector<string> a(n);
    cout << "Enter entries (N for NULL):\n";

    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node* root = createTree(a);
    long long badNode = 0;

    if (validateBST(root, false, 0,
                    false, 0, badNode)) {
        cout << "The given tree is a valid BST.\n";
    } else {
        cout << "The given tree is NOT a valid BST.\n";
        cout << "First violating node: "
             << badNode << '\n';
    }

    return 0;
}
