#include <iostream>
#include <vector>
#include <array>
using namespace std;

bool is_big(pair<int, int> a, pair<int, int> b)
{
    return (a.first > b.first && a.second > b.second);
}

int main()
{
    int n, x, y, k;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n; i++) {
        k = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (is_big(v[j], v[i])) k++;
        }
        cout << ++k << " ";
    }
    return 0;
}
