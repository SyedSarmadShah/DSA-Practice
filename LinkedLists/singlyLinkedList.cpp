#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
    this -> data = 0;
    this -> next = NULL;
}

};

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    Node* current = head;
    while (current != NULL) {
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;

    return 0;
}