#include <iostream>
using namespace std;

bool is_hansu(int x)
{
    int next, diff;
    next = x / 10;
    diff = next%10 - x%10;
    x = next;
    while (x >= 10) {
        next = x / 10;
        if ((next%10 - x%10) != diff) {
            return false;
        }
        x = next;
    }
    return true;
}

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i < n+1; i++) {
        if (is_hansu(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}
