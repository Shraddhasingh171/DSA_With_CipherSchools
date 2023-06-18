#include<iostream>
using namespace std;

int main(){
    int n[]={17,29,16,23,9,29};
    int k=16;
    
    int i=0;
    while(i<5){
        if(n[i]==k){
            cout<<"found at "<<i;
            break;
        }
        i++;
    }
}