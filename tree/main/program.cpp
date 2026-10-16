```
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

bool isBST(Node* root, long long minVal, long long maxVal) {
    if (!root) return true;
    if (root->data <= minVal || root->data >= maxVal) return false;
    return isBST(root->left, minVal, root->data) && 
           isBST(root->right, root->data, maxVal);
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

    if (isBST(root, LLONG_MIN, LLONG_MAX))
        cout << "The given tree is a valid BST.\n";
    else
        cout << "The given tree is NOT a valid BST.\n";

    return 0;
}
```
