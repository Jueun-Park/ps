#include <iostream>
using namespace std;

int d(int x)
{
    int ret;
    ret = x;
    while (x > 0) {
        ret += x % 10;
        x /= 10;
    }
    return ret;
}

int main()
{
    int count[10001] = {0};
    int dd;
    for (int i = 1; i <= 10000; i++) {
        if ((dd = d(i)) <= 10000) {
            count[dd] = 1;
        }
        if (count[i] == 0) {
            cout << i << "\n";
        }
    }
    return 0;
}
