
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

// Create a binary tree using level-order input.
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

// Original validation: checks direct children only.
bool isBST(Node* root) {
    if (root == nullptr)
        return true;

    if (root->left != nullptr &&
        root->left->data >= root->data)
        return false;

    if (root->right != nullptr &&
        root->right->data <= root->data)
        return false;

    return isBST(root->left) &&
           isBST(root->right);
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

    if (isBST(root))
        cout << "The given tree is a valid BST.\n";
    else
        cout << "The given tree is NOT a valid BST.\n";

    return 0;
}
