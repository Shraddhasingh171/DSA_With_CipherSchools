// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 4, 5, 12, 13, 18, 7, 9};
//     int max = 18;
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     int key;
//     cout << "Enter the key to be searched: ";
//     cin >> key;
//     int hash = key % max;
//     int i = hash;
//     while (arr[i] != key && i < n)
//     {
//         i = (i + 1) % max;
//     }
//     if (i<n)
//     {
//         cout << "Key found at index " << i;
//     }
//     else
//     {
//         cout << "Key not found";
//     }
//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
// Write C++ code here
int A1[]={3,4,5,12,13,18,7,9};
int size=sizeof(A1)/sizeof(A1[0]);
//cout<<size;
int max=A1[0];
for(int i=0;i<size;i++)
{
if (A1[i]>max)
max=A1[i];
}
int A[max];
for(int i=0;i<size;i++)
{
A[A1[i]]=A1[i];
}
int key=0;
cout<<"Enter a number : ";
cin>>key;
int flag=0;
if (A[key]==key)
{
cout<<"\n Found in 1 comparison";
}
else
cout<<"\n Not found";
return 0;
}