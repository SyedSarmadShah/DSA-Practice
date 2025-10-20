#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function Prototypes
void insertAtHead(Node*& head, int data);
void insertAtPosition(Node*& head, int position, int data);
void insertAtTail(Node*& tail, int data);
void print(Node*& head);

// Function Definitions
void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node*& head, int position, int data) {
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the node before the desired position
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void insertAtTail(Node*& tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Start with one node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, 2, 20);
    print(head);

    return 0;
}
