#include <iostream>
using namespace std;

int bunhaehab(int x)
{
    int res = x;
    while (x > 0) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (bunhaehab(i) == n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
