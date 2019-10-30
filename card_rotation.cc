#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int t, n, pick;
    bool is_possible;
    cin >> t;
    for (int test = 0; test < t; test++) {
        cin >> n;
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        queue<int> q;
        for (int i = 1; i < n+1; i++) {
            q.push(i);
        }
        vector<int> arr(n);
        pick = 1;
        is_possible = true;
        while (true) {
            for (int i = 0; i < pick; i++) {
                q.push(q.front());
                q.pop();
            }
            if (arr[q.front() - 1] == 0) {
                arr[q.front() - 1] = pick;
            } else {
                is_possible = false;
                break;
            }
            if (q.size() == 1) {
                break;
            }
            q.pop();
            pick++;
        }
        if (is_possible) {
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}
