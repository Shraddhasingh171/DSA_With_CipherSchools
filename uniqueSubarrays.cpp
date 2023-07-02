#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to find all unique subarrays of given array
vector<vector<int>> findUniqueSubarrays(vector<int> nums) {
    vector<vector<int>> result;  // Stores the unique subarrays
    int n = nums.size();  // Size of the input array
    
    // Iterate over all possible subarray starting points
    for (int i = 0; i < n; i++) {
        unordered_set<int> subarraySet;  // Stores the unique elements of the current subarray
        
        // Iterate over all possible subarray ending points starting from i
        for (int j = i; j < n; j++) {
            // Insert the current element into the set
            subarraySet.insert(nums[j]);
            
            // Check if the current subarray is unique
            if (subarraySet.size() == (j - i + 1)) {
                vector<int> subarray;  // Stores the unique subarray
                
                // Convert the set into a vector
                for (const auto& element : subarraySet) {
                    subarray.push_back(element);
                }
                
                result.push_back(subarray);  // Add the unique subarray to the result
            }
        }
    }
    
    return result;  // Return the vector of unique subarrays
}

int main() {
    vector<int> nums = {1, 2, 2};
    
    // Call the function to find unique subarrays
    vector<vector<int>> uniqueSubarrays = findUniqueSubarrays(nums);
    
    // Print the unique subarrays
    for (const auto& subarray : uniqueSubarrays) {
        for (const auto& element : subarray) {
            cout << element << " ";
        }
        cout << endl;
    }
    
    return 0;
}
