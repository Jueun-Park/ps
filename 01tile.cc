#include <iostream>
using namespace std;

int memo[1000002];

int main()
{
    int n;
    cin >> n;
    memo[1] = 1;  // [1] 1
    memo[2] = 2;  // [2] 00 / 11
    // [3] = 3 -> 100 / 001 111
    // [4] = 5 -> 0000 1100 / 1001 0011 1111
    // [5] = 8 -> 10000 00100 11100 / 00001 11001 10011 00111 11111
    for (int i = 3; i <= n; i++) {
        memo[i] = (memo[i-2] + memo[i-1]) % 15746;
    }
    cout << memo[n];
    return 0;
}
