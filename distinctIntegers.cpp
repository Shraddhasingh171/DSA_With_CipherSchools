#include <iostream>
#include <vector>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& res) {
    if (start == nums.size()) {
        res.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, res);
        swap(nums[start], nums[i]);
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res;
    permute(nums, 0, res);
    for (auto& v : res) {
        for (auto& i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}