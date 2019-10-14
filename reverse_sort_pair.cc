#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> pair_array[100001];

bool y_first(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second) return true;
    else if (a.second == b.second) return a.first < b.first;
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pair_array[i].first >> pair_array[i].second;
    }
    sort(pair_array, pair_array + n, y_first);
    for (int i = 0; i < n; i++) {
        cout << pair_array[i].first << " " << pair_array[i].second << "\n";
    }
    return 0;
}
