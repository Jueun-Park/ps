#include <iostream>
using namespace std;

bool is_jongmal_num(int x)
{
    int count = 0;
    bool flag = false;
    while (x > 0) {
        if (x%10 == 6) {
            count++;
            if (!flag) flag = true;
        } else {
            flag = false;
            count = 0;
        }
        if (count >= 3) return true;
        x /= 10;
    }
    return false;
}

int main()
{
    int n, ans = 0, i = 0, now = 0;
    cin >> n;
    while (now < n) {
        if (is_jongmal_num(i)) {
            ans = i;
            now++;
        }
        i++;
    }
    cout << ans;
    return 0;
}
