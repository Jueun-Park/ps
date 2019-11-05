#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, et, ans;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main()
{
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), compare);
    et = arr[0].second;
    ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (et <= arr[i].first) {
            et = arr[i].second;
            ans++;
        }
    }
    cout << ans;
    
    return 0;
}
