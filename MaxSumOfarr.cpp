#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxvalue= arr[0];
    int curr_max = arr[0];
    for (int i = 1; i < n; i++)
    {
        curr_max = max(arr[i], curr_max + arr[i]);
        maxvalue = max(maxvalue, curr_max);
    }
    return maxvalue;
}

int main()
{
   int n;
   int arr[n];
   cin>>n;
   for(int i =0; i<n; i++){
    cin>>arr[i];
   }
    cout << maxSubarraySum(arr, n);
    return 0;
}