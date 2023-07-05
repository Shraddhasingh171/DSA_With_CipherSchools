#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int> &set, vector<vector<int>> &result, int index) {
  if (index == set.size()) {
    result.push_back(vector<int>());
    return;
  }

  generateSubsets(set, result, index + 1);
  vector<int> newSubset = result.back();
  newSubset.push_back(set[index]);
  result.push_back(newSubset);
}

int main() {
  vector<int> set = {1, 2, 3};
  vector<vector<int>> result;
  generateSubsets(set, result, 0);

  for (vector<int> subset : result) {
    for (int element : subset) {
      cout << element << " ";
    }
    cout << endl;
  }

  return 0;
}