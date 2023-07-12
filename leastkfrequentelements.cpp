#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;
vector<int> func(vector<int> num, int k) {
  unordered_map<int, int> freqMap;
  for (int i = 0; i < num.size(); i++) {
    freqMap[num[i]]++;
  }

  priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
  for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
    pq.push(make_pair(it->second, it->first));
  }

  vector<int> output;

  for (int i = 0; i < k; i++) {
    output.push_back(pq.top().second);
    pq.pop();
  }
  return output;
}

int main() {
  vector<int> num = {1, 3, 3, 4, 5, 4, 4, 3, 4, 5};
  vector<int> output = func(num, 3);
  for (int i = 0; i < output.size(); i++) {
    cout << output[i] << " ";
  }
  cout << endl;

  return 0;
}