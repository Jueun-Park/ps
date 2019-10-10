#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c;
    // a + b*x < c*x
    if (b < c) x = a / (c-b) + 1;
    else x = -1;
    cout << x;
    return 0;
}
