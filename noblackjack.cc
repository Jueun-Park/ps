#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m, temp, ans, diff, min_diff = INT_MAX;
    cin >> n >> m;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> index_vec(n, 0);
    for (int i = 0; i < 3; i++) {
        index_vec[i] = 1;
    }
    sort(index_vec.begin(), index_vec.end());
    do {
        temp = 0;
        for (int i = 0; i < index_vec.size(); i++) {
            if (index_vec[i] == 1) {
                temp += vec[i];
            }
        }
        diff = m - temp;
        if (diff == 0) {
            ans = m;
            break;
        } else if (diff < min_diff && diff > 0) {
            ans = temp;
            min_diff = diff;
        }
    } while (next_permutation(index_vec.begin(), index_vec.end()));
    cout << ans;
    return 0;
}
