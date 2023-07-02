//Sliding Window 
#include <bits/stdc++.h>
using namespace std;

int func(vector<int>v, int target)
{
    int n = v.size();
    int ans = INT_MAX;
    int sum = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        while (sum >= target)
        {
            ans = min(ans, i - start + 1);
            sum -= v[start];
            start++;
        }
    }
    if (ans == INT_MAX)
        return 0;
    return ans;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << func(v, target);
    return 0;
}