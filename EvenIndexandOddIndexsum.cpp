#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int EvenSum= 0;
    int OddSum = 0;
    for(int i=0; i<n;i++){
        if((i%2)==0){
            EvenSum+=arr[i];
        }
        else{
            OddSum+=arr[i];
        }
    }
    cout<<EvenSum<<endl;
    cout<<OddSum;
}