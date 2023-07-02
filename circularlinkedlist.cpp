#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
 
void insertion_beginning();
void insertion_last();
void deletion_beginning();
void deletion_last();
void display();
void search();
 
int main()
{
    int choice = 0;
    while (choice != 7)
    {

        cout << "Choose one option from the following list ..."<<endl;
        cout << "1.Insert in Beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search\n6.Show\n7.Exit\n";
        cout << "\nEnter your choice?\n";
        cin >> choice;
 
        switch (choice)
        {
            case 1:
                insertion_beginning();
                break;
            case 2:
                insertion_last();
                break;
            case 3:
                deletion_beginning();
                break;
            case 4:
                deletion_last();
                break;
            case 5:
                search();
                break;
            case 6:
                display();
                break;
            case 7:
                exit(0);
                break;
            default:
                cout << "Please enter a valid choice..\n";
        }
    }
    return 0;
}
 
void insertion_beginning()
{
    struct node *ptr, *temp;
    int item;
    ptr = new node;
 
    if (ptr == nullptr)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter Item value: ";
        cin >> item;
        ptr->data = item;
 
        if (head == nullptr)
        {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
            head = ptr;
        }
        cout << "\nNode inserted\n";
    }
}
 
void insertion_last()
{
    struct node *ptr, *temp;
    int item;
    ptr = new node;
 
    if (ptr == nullptr)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> item;
        ptr->data = item;
 
        if (head == nullptr)
        {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
        }
    }
    cout << "\nNode inserted\n";
}
 
void deletion_beginning()
{
    struct node *temp;
    if (head == nullptr)
    {
        cout << "\n UNDERFLOW";
    }
    else if (head->next == head)
    {
        head = nullptr;
        delete head;
        cout << "\nnode deleted\n";
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        head->next->prev = temp;
        delete head;
        head = temp->next;
    }
}
 
void deletion_last()
{
    struct node *ptr;
    if (head == nullptr)
    {
        cout << "\n UNDERFLOW";
    }
    else if (head->next == head)
    {
        head = nullptr;
        delete head;
        cout << "\nnode deleted\n";
    }
    else
    {
        ptr = head;
        if (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = head;
        head->prev = ptr->prev;
        delete ptr;
        cout << "\nnode deleted\n";
    }
}
 
void display()
{
    struct node *ptr;
    ptr = head;
 
    if (head == nullptr)
    {
        cout << "\nnothing to print";
    }
    else
    {
        cout << "\nprinting values ... \n";
 
        while (ptr->next != head)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
        cout << ptr->data << endl;
    }
}
 
void search()
{
    struct node *ptr;
    int item, i = 0, flag = 1;
    ptr = head;
 
    if (ptr == nullptr)
    {
        cout << "\nEmpty List\n";
    }
    else
    {
        cout << "\nEnter item which you want to search?\n";
        cin >> item;
 
        if (head->data == item)
        {
            cout << "item found at location " << i + 1;
            flag = 0;
        }
        else
        {
            while (ptr->next != head)
            {
                if (ptr->data == item)
                {
                    cout << "item found at location " << i + 1;
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 1;
                }
                i++;
                ptr = ptr->next;
            }
        }
 
        if (flag != 0)
        {
            cout << "Item not found\n";
        }
    }
}
