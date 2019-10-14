#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> pair_array[100001];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pair_array[i].first >> pair_array[i].second;
    }
    sort(pair_array, pair_array + n);
    for (int i = 0; i < n; i++) {
        cout << pair_array[i].first << " " << pair_array[i].second << "\n";
    }
    return 0;
}
