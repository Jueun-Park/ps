#include <iostream>
#include <vector>
using namespace std;

int n, m;

void solve(int depth, vector<int>& arr)
{
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            arr[depth] = i+1;
            solve(depth+1, arr);
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<int> arr(m);
    solve(0, arr);
    return 0;
}
