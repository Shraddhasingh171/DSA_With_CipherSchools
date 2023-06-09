#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=1;
    for(int i =1; i<=n; ++i){
        fact = fact*i;
    }
    
    cout<<"Result: "<<fact<<endl;
}

//write a program to take input of a index value and and value to add in given array
//Fibbonacci series
//Hot to do sum of all the the elements in array.