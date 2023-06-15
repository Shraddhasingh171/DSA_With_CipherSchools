#include <iostream>
using namespace std;
#include <stack>

int main() {
while(1){
int ch;
stack<int> myStack;
cout<<"Press 1 . Push an element"<<endl;
cout<<"Press 2 . Pop an element"<<endl;
cout<<"Press 3 . Print top element"<<endl;
cout<<"Press 4 . Calculate Size of stack"<<endl;
cout<<"Press 5 . Check Empty"<<endl;
cout<<"Press 6 . Exit"<<endl;
cout<<" Enter a number : ";
cin>>ch;
int data;
if (ch==1){
cin>>data;
myStack.push(data);
}
else if (ch ==2){
if(!myStack.empty()){
cout<<"Deleted element : "<<myStack.top()<<endl;
myStack.pop();
}
else
cout<<"Stack is empty "<<endl;
}
else if (ch ==3){
cout<<"Top element : "<<myStack.top()<<endl;
}
else if (ch ==4){
cout << "Stack size: " << myStack.size() << endl;}
else if (ch == 5){
if (myStack.empty()){
cout<<"Stack is Empty !"<<endl;
}
else
cout<<"Stack is not Empty !!"<<endl;
}
else if (ch == 6)
exit(0);
else
cout<<"Invalid Input !!";
}
return 0;
}