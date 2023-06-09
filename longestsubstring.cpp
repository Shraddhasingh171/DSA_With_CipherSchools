#include <iostream>
#include <string>
#include <set>
#include <unordered_set>

using namespace std;

int longestSubstringLength(string s)
{
    int n = s.length();
    int i = 0, j = 0, ans = 0;
    unordered_set<char> set;

    while (j < n)
    {
        if (set.find(s[j]) == set.end())
        {
            set.insert(s[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            set.erase(s[i]);
            i++;
        }
    }

    return ans;
}

int main()
{
    string s = "shraddha";
    cout << longestSubstringLength(s) << endl;
    return 0;
}