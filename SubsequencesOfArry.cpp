#include <iostream>
#include <vector>

using namespace std;

// Function to generate all subsequences of an array
vector<vector<int>> func(vector<int> arr) {
    // Create a vector to store all the subsequences
    vector<vector<int>> result;

    // Calculate the total number of possible subsequences
    int n = arr.size();
    int totalSubsequences = 1 << n;  // Equivalent to 2^n

    // Generate all subsequences using bitmasking
    for (int mask = 0; mask < totalSubsequences; mask++) {
        vector<int> subsequence;

        // Check each bit of the mask
        for (int i = 0; i < n; i++) {
            // If the i-th bit of the mask is set, add the corresponding element to the subsequence
            if ((mask & (1 << i)) != 0) {
                subsequence.push_back(arr[i]);
            }
        }

        // Add the current subsequence to the result vector
        result.push_back(subsequence);
    }

    // Return the vector containing all the subsequences
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> subsequences = func(arr);

    // Print all the subsequences
    for (const vector<int>& subsequence : subsequences) {
        for (int num : subsequence) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
