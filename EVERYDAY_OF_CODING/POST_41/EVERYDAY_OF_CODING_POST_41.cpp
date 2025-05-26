#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* prev;
    Node* next;

    Node (int data) {
        value = data;
        prev = nullptr;
        next = nullptr;
    }
};
void insertEnd(Node* head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) { /// first element
        head = newNode;
        return ;
    }
    /// has element(s)
    Node* temp = head;
    while (temp -> next != nullptr) {
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> prev =  temp;
    newNode -> next = nullptr;

    return ;
}
void displayForward(Node* head) {
    Node* temp = head;

    while (temp -> next != nullptr) {
        cout<<"["<<' ';

        cout<<(temp -> prev != nullptr ? to_string(temp -> prev -> value) : "NULL")<<' ';

        cout<<"<-"<<temp -> value<<"->";

        cout<<(temp -> next != nullptr ? to_string(temp -> next -> value) : "NULL")<<' ';

        cout<<"]"<<' ';
    }
    return ;
}
void displayBackWard(Node* tail) {
    Node* temp = tail;

    while (temp -> prev != nullptr) {
        cout<<"["<<' ';

        cout<<(temp -> next != nullptr ? to_string(temp -> next -> value) : "NULL")<<' ';

        cout<<"<-"<<temp -> value<<"->";

        cout<<(temp -> prev != nullptr ? to_string(temp -> prev -> value) : "NULL")<<' ';

        cout<<"]"<<' ';
    }
}
void deleteFromStart(Node* head) {
    if (!head) return ; /// no node
    if (!head->next) {
        delete head; /// only 1 node
        head = nullptr;
        return ;
    }
    /// more than 1
    Node* temp = head;
    head -> next -> prev = nullptr;
    delete temp;
    return ;
}
void deleteFromEnd(Node* tail) {
    if (!tail) return ; /// no node
    if (!tail->prev) {
        delete tail; /// only 1 node
        tail = nullptr;
        return ;
    }
    /// more than 1
    Node* temp = tail;
    tail -> prev -> next = nullptr;
    delete temp;
    return ;
}
Node* fromHeadToTail(Node* head) {
    Node* tail = head;
    while (tail && tail -> next) {
        tail = tail -> next;
    }
    return tail;
}
signed main()
{

    Node* head = nullptr; /// initialize

    int sizeList, value;
    cin>>sizeList;

    for (int i = 1; i <= sizeList; i++) {
        cin>>value;
        insertEnd(head, value);
    }
    return 0;
}
