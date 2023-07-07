 #include <iostream>
 using namespace std;

 int main()
 {
     int i, key, pos, hash, probe;
    int arr[5]={3,7,9,15,18};
     cout << "Enter the element to be searched: ";
     cin >> key;
     hash = key % 5;
     probe = 0;
     while (arr[hash] != key && arr[hash] != -1)
     {
         probe++;
         hash = (hash + probe) % 5;
     }
     if (arr[hash] == key)
         cout << "Element found at position " << hash << " after " << probe << " probes.";
     else
        cout << "Element not found.";
    return 0;
 }