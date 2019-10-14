#include <iostream>
#include <algorithm>

using namespace std;

pair<int, string> array[100001];

int condition(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i].first >> array[i].second;
    }
    stable_sort(array, array + n, condition);
    for (int i = 0; i < n; i++) {
        cout << array[i].first << " " << array[i].second << "\n";
    }
    return 0;
}
