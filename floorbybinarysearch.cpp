#include<iostream>
using namespace std;

int flooring(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int floor= -1;

    while(s<=e){
        int m= (s+(e-s))/2;
        if(arr[m] == target){
            return m;
        }
        else if(arr[m]<target){
            s=m+1;
            floor=m;
        }    
        else{
            e=m-1;
        }
    }
    return floor;
}

int main(){
    int arr[]={2,4,7,8,16,18};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target = 15;
    int index = flooring(arr,n, target);
    cout<<index;
}

//same 
// public static int[] bs(int[] arr, int target) {
// int s = 0;
// int e = arr.length - 1;
// int[] ans = {-1, -1};
// int k = 0;

// while(s <= e) {
// int m = s + (e - s) / 2;
// if(arr[m] == target) {
// ans[k] = m;
// k++;
// }
// else if (arr[m] < target)
// s = m + 1;
// else {
// e = m - 1;
// }
// }

// return ans;
// }