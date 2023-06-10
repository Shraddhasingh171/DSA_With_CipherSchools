#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a=0, b=1,c=a+b;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<< " ";

    }
    return 0;
}