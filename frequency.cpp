#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  //vector<string> arr = {"apple", "banana", "apple", "orange", "banana", "apple"};
  int n;
  cin>>n;
  vector<string> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  map<string, int> freq;

  for (string str : arr) {
    if (freq.find(str) == freq.end()) {
      freq[str] = 1;
    } else {
      freq[str]++;
    }
  }
  for (auto it : freq) {
    cout << it.first << ": " << it.second << endl;
  }

  return 0;
}