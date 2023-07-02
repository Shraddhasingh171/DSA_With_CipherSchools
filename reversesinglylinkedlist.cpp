#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head = NULL;

void insert(int data){
    node *newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void list(){
    node *p=head;
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

void reverselist(){
    node *current = head;
    node *prev = NULL;
    node *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
int main(){

    insert(10);
    insert(20);
    insert(30);
    insert(40);

    reverselist();
    list();
    reverselist();
    
}