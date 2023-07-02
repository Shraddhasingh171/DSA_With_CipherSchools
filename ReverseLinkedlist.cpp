#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int data;
    node *next;
}

node *reverse(node *head){
    if(!head ||!head->next)
       return head;
    else{
        //reversing the list
        node* prev=NULL, *curr = NULL,*temp=NULL;
        curr=head;
        while (curr!=NULL && curr->next!=NULL ){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head->next=reverse(prev);
        return curr;
    }
}
int main(){
    int n, data;
    cout<<"Enter number of nodes in linkedlist: ";
    cin>>n;
    for(int i=1; i<=n; ++i){
        cin>>data;
    }
    return 0;
}