#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void print() {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtStart() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    print();
    deleteAtStart();
    print();
    return 0;
}