#include <iostream>
using namespace std;

int n, a, d, ans = 0;

bool is_prime_number(int x)
{
    if (x == 1) return false;
    d = 2;
    while (d * d <= x) {
        if (x%d == 0) return false;
        d++;
    }
    return true;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (is_prime_number(a)) ans++;
    }
    cout << ans;
    
    return 0;
}
