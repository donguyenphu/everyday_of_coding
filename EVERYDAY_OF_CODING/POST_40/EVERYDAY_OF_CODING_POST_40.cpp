#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data; /// for value (item)
    Node* next /// pointer (next)
    Node(int val) : data(val), next(nullptr) {}
};
void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) { /// just insert the head
        head = newNode;
        return ;
    }
    /// already have the head
    Node* tmpNode = head;
    while (tmpNode -> next) {
        tmpNode = tmpNode -> next; /// switch to the next node
    }
    tmpNode -> next = newNode; /// insert at the end
}
void deleteNode(Node*& head, int val) {
    if (!head) return; /// no head
    /// if the node to delete is the head
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    /// search for the node
    Node* temp = head;
    while (temp->next && temp->next->data != val) {
        temp = temp->next;
    }
    /// if node is found
    if (temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}
void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL"; /// tail
}
signed main() {
    Node* head = nullptr; /// initialize
    int sizeLinkedList;
    cin>>sizeLinkedList;
    for (int index = 0; i <= sizeLinkedList - 1; i++) {
        int value;
        cin>>value;
        insertNode(head, value);
    }

    display(head);
    return 0;
}
