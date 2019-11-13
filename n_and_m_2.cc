#include <iostream>
#include <vector>
using namespace std;

int n, m, a;

void solve(vector<int>& arr, int depth)
{
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    } else {
        if (depth > 0) a = arr[depth-1];
        else a = 0;
        for (int i = a + 1; i <= n; i++) {
            arr[depth] = i;
            solve(arr, depth+1);
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<int> arr(m);
    solve(arr, 0);
    return 0;
}
