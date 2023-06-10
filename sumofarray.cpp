#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,4,9,4,8,2,5,1,0};
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}