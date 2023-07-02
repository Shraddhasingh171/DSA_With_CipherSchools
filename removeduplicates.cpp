#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

// void insert(int data) {
//     Node *newNode = new Node();
//     newNode->data = data;
//     newNode->next = head;
//     head = newNode;
// }

void list(node* head){
    node *p = head;
    while(p != head){
        cout<<p->data<<" ";
        p= p->next;
    }
}

node* deleteduplicates(node* head){
    node* current = head;
    while(current != NULL){
        node* next = current->next;
        while(next != NULL){
           next = next->next;
        }
         current->next = next;
         current = next;
    }
    return head;
}


int main(){
    insert(10);
    insert(25);
    insert(35);
    insert(35);
    insert(89);
    deleteduplicates();
    list();
    return 0;

}