#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head= NULL;

void insert(int data){
    node *newNode = new node();
    newNode->data= data;
    newNode->next = head;
    head = newNode;
}

int countNodes(){
    int count =0;
    node *p = head;
    while(p != NULL){
        count++;
        p = p->next;
    }
    return count;
}
int main(){
    // int x, n;
    // cout << " Enter the no. of nodes : "<<endl;
    // cin >> n;
    
    // for (int i=1 ; i<=n; ++i) {
    //     cin>>x;
    //     insert(x);
    // }
    insert(12);
    insert (20);
    insert (40);
    insert (30);
    cout<<countNodes()<<endl;
    return 0;
}