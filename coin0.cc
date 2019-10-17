#include <iostream>
using namespace std;

int coins[11];

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    for (int i = n-1; i >= 0; i--) {
        while ((k - coins[i]) >= 0) {
            k -= coins[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}
