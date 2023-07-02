#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the number of subarrays of size k with sum greater than m
int func(vector<int> v, int k, int m) {
    int count = 0;  // Counter for the number of subarrays

    // Calculate the size of the input vector
    int n = v.size();

    // Check if k is greater than the size of the input vector
    if (k > n) {
        cout << "Invalid input! Size of input vector is smaller than k." << endl;
        return count;
    }

    // Calculate the sum of the first k elements
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    // Check if the sum of the first k elements is greater than m
    if (sum > m) {
        count++;
    }

    // Slide the window of size k through the array and update the sum
    for (int i = k; i < n; i++) {
        sum = sum - v[i - k] + v[i];  // Subtract the previous element and add the next element

        // Check if the sum of the current subarray is greater than m
        if (sum > m) {
            count++;
        }
    }

    // Return the count of subarrays with sum greater than m
    return count;
}

int main() {
    // vector<int> v = {2, 1, 8, -4, 5, 8, 5, 3, 7, 4, 0, -3, -5};
    // int k = 3;
    // int m = 10;
    int n, k, m;
    cin >> n >> k >> m;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int numSubarrays = func(v, k, m);

    cout << "Number of subarrays of size " << k << " with sum greater than " << m << ": " << numSubarrays << endl;

    return 0;
}
