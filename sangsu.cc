#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a, b;
    string as, bs;
    cin >> a >> b;
    as = to_string(a);
    bs = to_string(b);
    reverse(as.begin(), as.end());
    reverse(bs.begin(), bs.end());
    a = stoi(as);
    b = stoi(bs);
    cout << (a > b ? a : b);
    return 0;
}
