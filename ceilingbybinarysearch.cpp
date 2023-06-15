#include<iostream>
#include<cmath>
using namespace std;

int ceiling(int[] arr, int n, int target){
    int s=0;
    int e=n-1;
    int ceil=-1;

    while(s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ceil;
}

int main(){
    int target;
    cin>>target;
    int arr[8]={7,9,11,16,18,23,56,71};
    cout<<ceiling(arr, target);
}