#include <iostream>
#include <vector>
using namespace std;

int n, m;

void solve(int depth, vector<int> &arr, vector<bool> &check)
{
    if (depth == m) {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i]+1 << " ";
        }
        cout << "\n";
    } else {
        for (int i = 0; i < n; i++)
        {
            if (!check[i]) {
                arr[depth] = i;
                check[i] = true;
                solve(depth + 1, arr, check);
                check[i] = false;
            }
        }
        
    }
}

int main()
{
    cin >> n >> m;
    vector<int> arr(m);
    vector<bool> check(m);
    solve(0, arr, check);
    return 0;
}
