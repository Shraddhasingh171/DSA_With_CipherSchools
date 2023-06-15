#include<iostream>
#include<cmath>
using namespace std;

int flooring(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int floor=-1;

    while(s<=e){
        int m= (s+e)/2;
        if(arr[m] == target){
            return m;
        }       
        else if(arr[m]<target){ 
            s=m+1;       
              
        }    
        else{
            e=m-1;
        }        
    }
    return floor;
}

int main(){
    int target;
    cin>>target;
    int arr[6]={2,4,7,8,16,18};
    cout<<flooring(arr, 6, target);
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

//1. Backet Balacing
//2. all types of intercoversion postfix prefix infix
//3. Stock span