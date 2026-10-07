# Token System - Source Code

```cpp
#include <iostream>
using namespace std;

struct Node
{
    int token;
    Node *next;
};

Node* createNode(int token)
{
    Node *newNode;
    newNode = new Node;
    newNode->token = token;
    newNode->next = NULL;
    return newNode;
}

void addToken(Node **head, int token)
{
    Node *newNode = createNode(token);
    Node *temp;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void serveToken(Node **head)
{
    Node *temp;

    if (*head == NULL)
    {
        cout << "No pending tokens." << endl;
        return;
    }

    temp = *head;

    cout << "Serving Token: " << temp->token << endl;

    *head = temp->next;
    delete temp;
}

void searchToken(Node *head, int token)
{
    while (head != NULL)
    {
        if (head->token == token)
        {
            cout << "Token " << token << " is pending." << endl;
            return;
        }

        head = head->next;
    }

    cout << "Token not found." << endl;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "No pending tokens." << endl;
        return;
    }

    cout << "Pending Tokens: ";

    while (head != NULL)
    {
        cout << head->token << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;

    addToken(&head, 101);
    addToken(&head, 102);
    addToken(&head, 103);
    addToken(&head, 104);

    cout << "Smart Canteen Token Management" << endl << endl;

    display(head);

    serveToken(&head);

    display(head);

    searchToken(head, 103);

    return 0;
}
```
