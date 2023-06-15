#include<iostream>
using namespace std;

int permutation(int[] arr, int end, int start){
    if(start==end){
        for(int i=0;i<end;i++){
            cout<<arr[i]<<" ";
        }
    }
    for(int i=start; i<end; i++){
        swap(arr[start],arr[i]);
        permutation(arr,end,start+1);
        swap(arr[start],arr[i]);
    }
}
int main(){
    int arr[3]={1,2,3};
    cout<<permutation(arr,0,3);
}