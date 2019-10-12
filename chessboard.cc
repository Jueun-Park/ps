#include <iostream>
#include <algorithm>
using namespace std;

bool board[51][51];

int get_num_paint(int y, int x)
{
    int res = 0;
    bool prev_color = board[y][x];
    for (int i = y; i < y+8; i++) {
        for (int j = x; j < x+8; j++) {
            if (i == y && j == x) continue;
            if (board[i][j] != (prev_color = !prev_color)) res++;
        }
        prev_color = !prev_color;
    }
    return min(res, 64-res);
}

int main()
{
    // parse
    int n, m, ans = 64;
    char c;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == 'B') board[i][j] = true;
        }
    }
    // solve
    for (int i = 0; i <= n-8; i++) {
        for (int j = 0; j <= m-8; j++) {
            ans = min(ans, get_num_paint(i, j));
        }
    }
    cout << ans;
    return 0;
}
