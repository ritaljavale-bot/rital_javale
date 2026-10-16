#include <iostream>
using namespace std;

struct Node {
    int token;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;
Node* top = NULL;

// Queue: Add token (FIFO)
void enqueue(int id) {
    Node* n = new Node{id, NULL};
    if (rear == NULL)
        front = rear = n;
    else {
        rear->next = n;
        rear = n;
    }
    cout << "Token added: " << id << endl;
}

// Stack: Push latest order (LIFO)
void push(int id) {
    Node* n = new Node{id, top};
    top = n;
}

// Queue: Serve first customer
void dequeue() {
    if (front == NULL) {
        cout << "No pending tokens!" << endl;
        return;
    }
    Node* temp = front;
    cout << "Serving token: " << temp->token << endl;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    delete temp;
}

// Stack: Undo latest order
void pop() {
    if (top == NULL) {
        cout << "No order to undo!" << endl;
        return;
    }
    Node* temp = top;
    cout << "Undo latest order: " << top->token << endl;
    top = top->next;
    delete temp;
}

// Stack: View latest order
void peek() {
    if (top == NULL)
        cout << "No latest order!" << endl;
    else
        cout << "Latest order: " << top->token << endl;
}

// Search token in Queue
void searchToken(int id) {
    Node* temp = front;
    while (temp != NULL) {
        if (temp->token == id) {
            cout << "Token " << id << " is pending." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Token not found." << endl;
}

// Display pending Queue
void display() {
    Node* temp = front;
    if (temp == NULL) {
        cout << "No pending tokens." << endl;
        return;
    }
    cout << "Pending tokens: ";
    while (temp != NULL) {
        cout << temp->token << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    enqueue(101);
    push(101);
    enqueue(102);
    push(102);
    enqueue(103);
    push(103);

    cout << endl;
    display();
    searchToken(102);
    peek();

    cout << endl;
    dequeue();
    display();

    pop();
    peek();

    return 0;
}
