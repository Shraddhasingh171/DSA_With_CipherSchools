#include <iostream>
#include <vector>

using namespace std;

int findCombinations(vector<int>& nums, int target) {
    vector<int> dp(target + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = target; j >= nums[i]; j--) {
            dp[j] += dp[j - nums[i]];
        }
    }
    return dp[target];
}

int main() {
    vector<int> nums = {1, 2, 3};
    int target = 4;
    cout << findCombinations(nums, target) << endl;
    return 0;
}